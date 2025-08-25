#include "task2.h"
// #include "file_work.h"

std::string vernam_cipher(const std::string &message, const std::string &key)
{
    std::string result(message.size(), ' ');
    for (size_t i = 0; i < message.size(); ++i)
    {
        result[i] = xor_char(message[i], key[i]);
    }
    return result;
}

// Шифр Шамира
long shamir_encrypt_message(long p, long m, long cA, long cB)
{
    long x1 = power_modulo(m, cA, p);
    long x2 = power_modulo(x1, cB, p);
    // std::cout << "Зашифрованное сообщение: " << x2 << std::endl;

    return x2;
}

long shamir_decrypt_message(long p, long x2, long cA, long cB)
{
    long dA = mod_inverse(cA, p - 1);
    long dB = mod_inverse(cB, p - 1);
    long x3 = power_modulo(x2, dA, p);
    long x4 = power_modulo(x3, dB, p);
    // std::cout << "Расшифрованное сообщение: " << x4 << std::endl;
    return x4;
}

// Шифр Эль-Гамаля
std::pair<long, long> elgamal_encrypt_message(long p, long g, long m, long cB, long k)
{
    long dB = power_modulo(g, cB, p);
    long r = power_modulo(g, k, p);
    long e = power_modulo(m * (power_modulo(dB, k, p)), 1, p);
    // std::cout << "Зашифрованное сообщение: (r, e) = (" << r << ", " << e << ")" << std::endl;

    return std::make_pair(r, e);
}

long elgamal_decrypt_message(long p, long r, long e, long cB)
{
    long m_hatch = power_modulo(e * (power_modulo(r, p - 1 - cB, p)), 1, p);
    // std::cout << "Расшифрованное сообщение: " << m_hatch << std::endl;

    return m_hatch;
}

// Шифр RSA
long rsa_encrypt_message(long N, long m, long dB)
{
    long e = power_modulo(m, dB, N);
    // std::cout << "Зашифрованное сообщение: " << e << std::endl;

    return e;
}

long rsa_decrypt_message(long N, long e, long cB)
{
    long m_hatch = power_modulo(e, cB, N);
    // std::cout << "Расшифрованное сообщение: " << m_hatch << std::endl;

    return m_hatch;
}
