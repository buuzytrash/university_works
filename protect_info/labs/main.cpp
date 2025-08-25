#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "utils.h"
#include "file_work.h"
#include "md5.h"

void print_using_task1()
{
    std::cout << "Выберите функцию для вызова\n"
              << std::endl;
    std::cout << "1) Быстрое возведение в степень по модулю" << std::endl;
    std::cout << "2) Обобщенный алгоритм Евклида" << std::endl;
    std::cout << "3) Схема Диффи-Хеллмана" << std::endl;
    std::cout << "4) Шаг младенца, шаг великана" << std::endl;
}

void selected_task1(int choice)
{
    switch (choice)
    {
    case 1:
    {
        long a, x, p;

        std::cout << "Введите основание степени (a): ";
        std::cin >> a;
        std::cout << "Введите показатель степени (x): ";
        std::cin >> x;
        std::cout << "Введите модуль (p): ";
        std::cin >> p;

        long result = power_modulo(a, x, p);

        std::cout << "Результат: " << a << "^" << x << " mod " << p << " = " << result << std::endl;
    }
    break;

    case 2:
    {
        long a, b;
        std::cout << "Введите два числа (a >= b): ";
        std::cin >> a >> b;

        long gcd, x, y;
        gen_euclid(a, b, gcd, x, y);

        std::cout << "НОД(" << a << ", " << b << ") = " << gcd << std::endl;
        std::cout << "Коэффициенты x и y: " << x << ", " << y << std::endl;
    }
    break;

    case 3:
    {
        long p, g;
        std::cout << "Введите числа p и g (1 < g < p -1): ";
        std::cin >> p >> g;

        diffie_hellman(p, g);
    }
    break;

    case 4:
    {
        long a, y, p;
        std::cout << "Введите числа a, y, p: ";
        std::cin >> a >> y >> p;

        long result = baby_giant(a, y, p);

        if (result != -1)
        {
            std::cout << "Дискретный логарифм: " << result << std::endl;
        }
        else
        {
            std::cout << "Дискретный логарифм не найден." << std::endl;
        }
    }

    default:
        break;
    }
}

void print_using_task2()
{
    std::cout << "Выберите функцию для вызова\n"
              << std::endl;
    std::cout << "1) Шифр Шамира" << std::endl;
    std::cout << "2) Шифр Эль-Гамаля" << std::endl;
    std::cout << "3) Шифр Вернама" << std::endl;
    std::cout << "4) Шифр RSA" << std::endl;
}

void selected_task2(int choice)
{
    switch (choice)
    {
    case (1):
    {
        long long p, m, cA, cB;

        p = random_generator_simple(1000000, 10000000);
        std::cout << "Параметр p = " << p << std::endl;

        cA = generate_coprime(p - 1);
        std::cout << "cA = " << cA << std::endl;

        cB = generate_coprime(p - 1);
        std::cout << "cB = " << cB << std::endl;

        std::cout << "Введите сообщение m: ";
        std::cin >> m;

        // shamir_cipher(p, m, cA, cB);
        long x2 = shamir_encrypt_message(p, m, cA, cB);
        long m_hatch = shamir_decrypt_message(p, x2, cA, cB);

        std::cout << "Расшиврованное сообщение: " << m_hatch << std::endl;

        std::string input = "other/shamir.jpg", encrypted = "encrypted.bin", decrypted = "decrypted.jpg";
        encrypt_shamir_file(input, encrypted, p, cA, cB);
        decrypt_shamir_file(encrypted, decrypted, p, cA, cB);
    }
    break;
    case (2):
    {
        long long p, m, cB, k, g;

        p = random_generator_simple(100000, 1000000);
        std::cout << "Параметр p = " << p << std::endl;

        // std::cin >> g;
        g = random_generator(100000, 1000000);
        std::cout << "Параметр g = " << g << std::endl;

        cB = random_generator(1, p - 1);
        std::cout << "Параметр cB = " << cB << std::endl;

        k = random_generator(1, p - 2);
        std::cout << "Параметр k = " << k << std::endl;

        std::cout << "Введите сообщение m: ";
        std::cin >> m;
        std::pair<long, long> r_e = elgamal_encrypt_message(p, g, m, cB, k);
        long m_hatch =
            elgamal_decrypt_message(p, r_e.first, r_e.second, cB);
        std::cout << "Расшифрованное сообщение: " << m_hatch << std::endl;

        std::string input = "other/elgamal.jpg", encrypted = "encrypted.bin", decrypted = "decrypted.jpg";
        encrypt_elgamal_file(input, encrypted, p, g, cB, k);
        decrypt_elgamal_file(encrypted, decrypted, p, cB);
    }
    break;
    case (3):
    {
        std::string m;

        std::cout << "Введите исходное сообщение: " << std::endl;
        std::cin >> m;

        std::string k = generate_key(m.size());
        std::cout << "Ключ для шифра:" << k << std::endl;

        std::string encrypted = vernam_cipher(m, k);
        std::string decrypted = vernam_cipher(encrypted, k);

        std::cout << "Зашифрованное сообщение: " << encrypted << std::endl
                  << "Исходное сообщение: " << decrypted << std::endl;

        std::string input = "other/vernam.jpg", f_encrypted = "encrypted.bin", f_decrypted = "decrypted.jpg";
        std::string fkey = generate_key(get_file_size(input));

        en_de_crypt_vernam_file(input, f_encrypted, fkey);
        en_de_crypt_vernam_file(f_encrypted, f_decrypted, fkey);
    }
    break;
    case (4):
    {
        long long N, P, Q, m, phi, dB, cB;
        P = random_generator_simple(100, 1000);
        std::cout << "Параметр P = " << P << std::endl;

        Q = random_generator_simple(100, 1000);
        std::cout << "Параметр Q = " << Q << std::endl;

        N = P * Q;
        std::cout << "Параметр N = " << N << std::endl;

        phi = (P - 1) * (Q - 1);
        std::cout << "Параметр phi = " << phi << std::endl;

        dB = generate_coprime(phi);
        std::cout << "Параметр dB = " << dB << std::endl;

        cB = mod_inverse(dB, phi);
        std::cout
            << "Введите сообщение m: ";
        std::cin >> m;

        std::string input = "other/rsa.jpg", encrypted = "encrypted.bin", decrypted = "decrypted.jpg";
        encrypt_rsa_file(input, encrypted, N, dB);
        decrypt_rsa_file(encrypted, decrypted, N, cB);
    }
    break;
    case (5):
        exit(EXIT_SUCCESS);

    default:
        break;
    }
}

void print_using_task3()
{
    std::cout << "Выберите тип подписи\n"
              << std::endl;
    std::cout << "1) Подпись RSA" << std::endl;
    std::cout << "2) Подпись Эль-Гамаля" << std::endl;
    std::cout << "3) Подпись ГОСТ" << std::endl;
}

void selected_task3(int choice)
{
    switch (choice)
    {
    case (1):
    {

        long long N, P, Q, phi, dB, cB;
        P = random_generator_simple(100, 1000);
        Q = random_generator_simple(100, 1000);

        N = P * Q;

        phi = (P - 1) * (Q - 1);
        dB = generate_coprime(phi);
        std::cout << "Открытые параметры N = " << N << " и dB = " << dB << std::endl;

        cB = mod_inverse(dB, phi);

        std::string filename = "other/shamir.txt";
        MD5 md5;
        readFileforSign(filename, md5);
        md5.finalize();
        std::string hexhash = md5.hexdigest();
        std::vector<long long> hashvector = HashToVector(hexhash);
        std::vector<long long> sign = rsa_sign(cB, N, hashvector);

        saveSignature("Saved_sign.sig", sign);

        is_rsa_sign_valid(dB, N, sign, hashvector);
    }
    break;

    case (2):
    {
        long long p, g;
        p = random_generator_simple(100, 1000);
        g = 2;

        long long x, y;
        x = random_generator(1, p - 1);
        y = power_modulo(g, x, p);

        std::cout << "Открытые параметры: p = " << p << " g = " << g << " y = " << y << std::endl;

        std::cout << "Введите сообщение: " << std::endl;
        std::string m;
        std::cin >> m;

        std::string hexhash = md5(m);
        std::vector<long long> hashvector = HashToVector(hexhash);
        long long h = hashvector[0] % (p - 1);

        std::pair<long, long> param = elgamal_sign(p, g, x, h);

        std::cout
            << "Message " << m << " Sign " << param.second << std::endl;
        is_elgamal_sign_valid(p, g, param.second, param.first, h, y);
    }
    break;

    case (3):
    {
        long long p, q, b;
        long long a, x, y;
        do
        {
            q = random_generator_simple(1000, 5000);
            b = random_generator(1000, 10000);
            p = b * q + 1;
        } while (!miller_rabin_test(p, 10)); // p длиной 1024 бит

        do
        {
            a = random_generator(1, p - 1) + 1;

        } while (power_modulo(a, q, p) != 1);

        x = random_generator(1, q - 1) + 1;
        y = power_modulo(a, x, p);
        std::cout << "Открытые параметры: p = " << p << " q =  " << q << "  a = " << a << " y = " << y << std::endl;

        std::string m;
        std::cout << "Введите сообщение: ";
        std::cin >> m;

        std::string hexhash = md5(m);
        std::vector<long long> hashvector = HashToVector(hexhash);
        long long h = hashvector[0] % (q);
        long long s;

        while ((s = dsa_sign(p, q, a, x, y, h)) == 0)
        {
            std::cout << s << std::endl;
        }
    }
    break;
    default:
        break;
    }
}

void selected_task4(int num_players)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    long long p = random_generator_simple(10000, 100000);
    std::cout << "Параметр p = " << p << std::endl;

    std::vector<Card> deck = {
        {1, "Туз пик"}, {2, "2 пик"}, {3, "3 пик"}, {4, "4 пик"}, {5, "5 пик"}, {6, "6 пик"}, {7, "7 пик"}, {8, "8 пик"}, {9, "9 пик"}, {10, "10 пик"}, {11, "Валет пик"}, {12, "Дама пик"}, {13, "Король пик"}, {14, "Туз червей"}, {15, "2 червей"}, {16, "3 червей"}, {17, "4 червей"}, {18, "5 червей"}, {19, "6 червей"}, {20, "7 червей"}, {21, "8 червей"}, {22, "9 червей"}, {23, "10 червей"}, {24, "Валет червей"}, {25, "Дама червей"}, {26, "Король червей"}, {27, "Туз треф"}, {28, "2 треф"}, {29, "3 треф"}, {30, "4 треф"}, {31, "5 треф"}, {32, "6 треф"}, {33, "7 треф"}, {34, "8 треф"}, {35, "9 треф"}, {36, "10 треф"}, {37, "Валет треф"}, {38, "Дама треф"}, {39, "Король треф"}, {40, "Туз бубен"}, {41, "2 бубен"}, {42, "3 бубен"}, {43, "4 бубен"}, {44, "5 бубен"}, {45, "6 бубен"}, {46, "7 бубен"}, {47, "8 бубен"}, {48, "9 бубен"}, {49, "10 бубен"}, {50, "Валет бубен"}, {51, "Дама бубен"}, {52, "Король бубен"}};

    std::vector<Player> players;
    for (int i = 0; i < num_players; i++)
    {
        players.push_back(Player(p));
    }

    deal_cards(players, deck);

    for (size_t i = 0; i < players.size(); i++)
    {
        std::cout << "У игрока " << i + 1 << " на руках карты: ";
        for (auto card : players[i].cards)
        {
            long long decrypted_card = card;
            for (auto it = players.rbegin(); it != players.rend(); ++it)
            {
                decrypted_card = it->decrypt_card(decrypted_card);
            }
            auto card_name = std::find_if(deck.begin(), deck.end(), [decrypted_card](const Card &c)
                                          { return c.value == decrypted_card; })
                                 ->name;
            std::cout << card_name << "; ";

            // Проверка, что дешифрованная карта совпадает с исходной
            if (std::find_if(deck.begin(), deck.end(), [decrypted_card](const Card &c)
                             { return c.value == decrypted_card; }) == deck.end())
            {
                std::cerr << "Error: Decrypted card " << decrypted_card << " is not in the original deck." << std::endl;
            }
        }
        std::cout << std::endl;
    }
}

void selected_task5()
{
    Server server;

    // std::string name1 = "Alice";
    // std::string choice1 = "Yes";
    // vote(name1, choice1, server);

    // std::string name2 = "Bob";
    // std::string choice2 = "No";
    vote("Alice", "Yes", server);
    vote("Bob", "No", server);
    vote("Khadid Kashimiri", "Abstain", server);
    vote("Alice", "No", server);
    vote("Rayan Gosling", "Yes", server);

    // Выводим результаты голосования
    std::cout << std::endl
              << "Результаты голосования:" << std::endl;
    for (const auto &vote : server.blanks)
    {
        std::cout << "Пользователь: " << vote.first << ", Подпись: " << vote.second << std::endl;
    }
}

int main()
{
    int choice_task;
    int choice;
    std::cout << "Введите номер лабораторной работы: " << std::endl;
    std::cin >> choice_task;

    switch (choice_task)
    {
    case (1):
    {
        print_using_task1();
        std::cin >> choice;
        selected_task1(choice);
    }
    break;

    case (2):
    {
        print_using_task2();
        std::cin >> choice;
        selected_task2(choice);
    }
    break;

    case (3):
    {
        print_using_task3();
        std::cin >> choice;
        selected_task3(choice);
    }
    break;

    case (4):
    {
        std::cout << "Введите количество игроков: ";
        int num_players;
        std::cin >> num_players;
        selected_task4(num_players);
    }
    break;

    case (5):
    {
        selected_task5();
    }
    break;

    default:
        break;
    }

    return 0;
}