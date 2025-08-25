#include "utils.h"
#include <numeric>
#include <fstream>

bool miller_rabin_test(long long n, int k)
{
    if (n <= 1 || n == 4)
        return false;
    if (n <= 3)
        return true;

    // Находим d такое, что n - 1 = d * 2^r
    long d = n - 1;
    while (d % 2 == 0)
        d /= 2;

    // Выполняем тест Миллера-Рабина k раз
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<long> dis(2, n - 2);

    for (int i = 0; i < k; ++i)
    {
        long a = dis(gen);
        long x = power_modulo(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        bool continue_outer = false;
        for (long r = 1; r < d; ++r)
        {
            x = (x * x) % n;
            if (x == 1)
                return false;
            if (x == n - 1)
            {
                continue_outer = true;
                break;
            }
        }
        if (continue_outer)
            continue;

        return false;
    }

    return true;
}

long long random_generator_simple(long long min, long long max)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<> dis(min, max);

    while (true)
    {
        long long candidate = dis(gen);
        if (candidate % 2 == 0)
        {
            candidate++;
        }

        if (miller_rabin_test(candidate, 10))
        {
            return candidate;
        }
    }

    // return dis(gen);
}

long long random_generator(long long min, long long max)
{
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_int_distribution<long long> dis(min, max);

    return dis(gen);
}

long generate_coprime(long p)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<long> dis(2, p - 1);

    while (true)
    {
        long candidate = dis(gen);
        if (std::gcd(candidate, p) == 1)
        {
            return candidate;
        }
    }
}

long mod_inverse(long a, long m)
{
    long m0 = m, t, q;
    long x0 = 0, x1 = 1;
    if (m == 1)
        return 0;
    while (a > 1)
    {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
        x1 += m0;
    return x1;
}

char xor_char(char a, char b)
{
    return a ^ b;
}

std::string generate_key(size_t length)
{
    std::string key(length, ' ');
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, 255);

    for (size_t i = 0; i < length; ++i)
    {
        key[i] = static_cast<char>(distribution(generator));
    }

    return key;
}

size_t get_file_size(const std::string fname)
{
    std::ifstream file(fname, std::ios::binary | std::ios::ate);
    if (!file)
    {
        std::cerr << "Не удалось открыть файл для вычисления размера" << std::endl;
        return 0;
    }
    return file.tellg();
}