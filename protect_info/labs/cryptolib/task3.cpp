#include "task3.h"

std::vector<long long> rsa_sign(long cB, long N, std::vector<long long> hash)
{
    std::vector<long long> sign;
    for (long long y : hash)
    {
        long long s = power_modulo(y, cB, N);
        sign.push_back(s);
    }

    return sign;
}

void is_rsa_sign_valid(long dB, long N, std::vector<long long> sign, std::vector<long long> hash)
{
    bool valid = true;
    for (size_t i = 0; i < hash.size(); ++i)
    {
        long long w = power_modulo(sign[i], dB, N);
        if (w != hash[i])
        {
            valid = false;
            std::cout << w << i << std::endl;
            break;
        }
    }

    if (valid)
    {
        std::cout << "Signature is valid!" << std::endl;
    }
    else
    {
        std::cout << "Signature is invalid!" << std::endl;
    }
}

std::pair<long, long> elgamal_sign(long p, long g, long x, long h)
{
    long k = generate_coprime(p - 1);
    long r = power_modulo(g, k, p);
    long k_inv = mod_inverse(k, p - 1);
    long u = (h - x * r) % (p - 1);
    if (u < 0)
        u += (p - 1);
    long s = (k_inv * u) % (p - 1);

    return std::pair<long, long>(r, s);
}
void is_elgamal_sign_valid(long p, long g, long s, long r, long h_check, long y)
{
    long left = (power_modulo(y, r, p) * power_modulo(r, s, p)) % p;
    long right = power_modulo(g, h_check, p);

    if (left == right)
    {
        std::cout << "Signature is valid!" << std::endl;
    }
    else
    {
        std::cout << "Signature is invalid!" << std::endl;
    }
}

void is_dsa_sign_valid(long long s, long long r, long long p, long long q, long long a, long long y, long long h)
{
    if (r <= 0)
    {
        std::cerr << "Invalid signature: r <= 0 " << r << std::endl;
        return;
    }

    else if (r >= q)
    {
        std::cerr << "Invalid signature: r >= q " << r << " " << q << std::endl;
        return;
    }
    else if (s <= 0)
    {
        std::cerr << "Invalid signature: s <= 0 " << s << std::endl;
        return;
    }
    else if (s >= q)
    {
        std::cerr << "Invalid signature: r >= q " << s << " " << q << std::endl;
        return;
    }

    int h_inv = mod_inverse(h, q);
    int u1 = (s * h_inv) % q;
    int u2 = (-r * h_inv) % q;
    if (u2 < 0)
        u2 += q;

    int v = (power_modulo(a, u1, p) * power_modulo(y, u2, p)) % p % q;

    if (v == r)
    {
        std::cout << "Signature is valid!" << std::endl;
    }
    else
    {
        std::cout << "Signature is invalid!" << std::endl;
    }
}
long long dsa_sign(long long p, long long q, long long a, long long x, long long y, long long h)
{
    long long k, s, r;
    do
    {
        k = random_generator(1, q - 1);
        r = power_modulo(a, k, p) % q;
    } while (r == 0);

    s = (k * h + x * r) % q;
    if (s == 0)
    {
        std::cerr << "Error: s == 0, try again" << std::endl;
        return 0;
    }

    is_dsa_sign_valid(s, r, p, q, a, y, h);

    return s;
}