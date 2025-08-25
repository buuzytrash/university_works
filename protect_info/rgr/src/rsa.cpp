#include "../include/rsa.h"
#include <random>
#include <cmath>

bool is_prime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long mod_inverse(long long a, long long m)
{
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;
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

RSA_keys generate_keys()
{
    RSA_keys keys;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1000, 10000); // Диапазон для генерации простых чисел

    // Генерация простых чисел p и q
    long long p = dis(gen);
    long long q = dis(gen);
    while (!is_prime(p))
        p = dis(gen);
    while (!is_prime(q))
        q = dis(gen);

    keys.N = p * q;
    long long phi = (p - 1) * (q - 1);

    // Выбор открытой экспоненты e
    keys.e = 65537; // Обычно используется 65537
    while (gcd(keys.e, phi) != 1)
    {
        keys.e = dis(gen);
    }

    // Вычисление закрытой экспоненты d
    keys.d = mod_inverse(keys.e, phi);

    return keys;
}

long long mod_exp(long long base, long long exp, long long mod)
{
    long long result = 1;
    base = base % mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

std::vector<std::vector<long long>> encrypt_graph(const Graph &graph, const RSA_keys &keys)
{
    std::vector<std::vector<long long>> encrypted_graph(graph.n, std::vector<long long>(graph.n, 0));
    for (int i = 0; i < graph.n; ++i)
    {
        for (int j = 0; j < graph.n; ++j)
        {
            encrypted_graph[i][j] = mod_exp(graph.adj[i][j], keys.e, keys.N);
        }
    }
    return encrypted_graph;
}

Graph decrypt_graph(const std::vector<std::vector<long long>> &encrypted_graph, const RSA_keys &keys)
{
    Graph decrypted_graph;
    decrypted_graph.n = encrypted_graph.size();
    decrypted_graph.adj.resize(decrypted_graph.n, std::vector<int>(decrypted_graph.n, 0));
    for (int i = 0; i < decrypted_graph.n; ++i)
    {
        for (int j = 0; j < decrypted_graph.n; ++j)
        {
            decrypted_graph.adj[i][j] = mod_exp(encrypted_graph[i][j], keys.d, keys.N);
        }
    }
    return decrypted_graph;
}