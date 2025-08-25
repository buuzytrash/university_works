#include "task5.h"

Server::Server()
{
    do
    {
        P = random_generator_simple(0, 1000);
        Q = random_generator_simple(0, 1000);
    } while (P == Q);

    N = P * Q;
    std::cout << "N: " << N << std::endl;
    long long phi = (P - 1) * (Q - 1);
    D = generate_coprime(phi);
    std::cout << "D: " << D << std::endl;
    C = mod_inverse(D, phi);
    voted = std::set<std::string>();
    blanks = std::vector<std::pair<std::string, long long>>();
    std::cout << "Сервер запущен" << std::endl;
}

long long mod_mul(long long a, long long b, long long mod)
{
    long long result = 0;
    a = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
        {
            result = (result + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }
    return result % mod;
}

bool check_fixed_header(long long n, long long fixed_header)
{
    return (n >> 32) == fixed_header;
}

void vote(const std::string &name, const std::string &choice, Server &server)
{
    // Проверка, что пользователь еще не голосовал
    if (server.voted.find(name) != server.voted.end())
    {
        std::cout << "Пользователь " << name << " уже проголосовал." << std::endl;
        return;
    }

    // Фиксированный заголовок (32 бита)
    long long fixed_header = 0x12345678; // Пример фиксированного заголовка

    // Генерация случайного номера банкноты (32 бита)
    long long random_part = random_generator(0, (1LL << 32) - 1);

    // Создание числа n с фиксированным заголовком и случайным номером
    long long n = (fixed_header << 32) | random_part;
    // Генерация случайного числа r, взаимно простого с N
    long long r;
    do
    {
        r = random_generator(1, server.N - 1);
    } while (std::gcd(r, server.N) != 1);

    // Маскировка выбора
    long long masked_choice = mod_mul(n, power_modulo(r, server.D, server.N), server.N);

    // Отправка маскированного выбора на сервер
    long long signed_masked_choice = power_modulo(masked_choice, server.C, server.N);

    // Снятие маскировки
    long long r_inv = mod_inverse(r, server.N);
    long long unmasked_signed_choice = mod_mul(signed_masked_choice, r_inv, server.N);

    // Проверка наличия фиксированного заголовка
    if (!check_fixed_header(n, fixed_header))
    {
        std::cout << "Ошибка: фиксированный заголовок не совпадает." << std::endl;
        return;
    }

    // Сохранение подписанного выбора
    server.blanks.push_back({name, unmasked_signed_choice});
    server.voted.insert(name);

    std::cout << "Пользователь " << name << " проголосовал с выбором " << choice << std::endl;
}