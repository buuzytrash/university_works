#include "file_work.h"

#include "task2.h"
#include <fstream>
#include <string>
#include <iostream>

void encrypt_shamir_file(const std::string &input_fname, const std::string &output_fname, long p, long cA, long cB)
{
    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if ((!input_file) && (!output_file))
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
    }

    char byte;
    while (input_file.get(byte))
    {
        long encrypted_byte = shamir_encrypt_message(p, static_cast<unsigned char>(byte), cA, cB);
        output_file.write(reinterpret_cast<char *>(&encrypted_byte), sizeof(encrypted_byte));
    }

    input_file.close();
    output_file.close();
}

void decrypt_shamir_file(const std::string &input_fname, const std::string &output_fname, long p, long cA, long cB)
{
    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if ((!input_file) && (!output_file))
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
    }

    long encrypted_byte;
    while (input_file.read(reinterpret_cast<char *>(&encrypted_byte), sizeof(encrypted_byte)))
    {
        long decrypted_byte = shamir_decrypt_message(p, encrypted_byte, cA, cB);
        output_file.put(static_cast<char>(decrypted_byte));
    }

    input_file.close();
    output_file.close();
}

void encrypt_elgamal_file(const std::string &input_fname, const std::string &output_fname, long p, long g, long cB, long k)
{
    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if ((!input_file) && (!output_file))
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
    }

    char byte;
    while (input_file.get(byte))
    {
        auto encrypted_pair = elgamal_encrypt_message(p, g, static_cast<unsigned char>(byte), cB, k);
        output_file.write(reinterpret_cast<char *>(&encrypted_pair.first), sizeof(encrypted_pair.first));
        output_file.write(reinterpret_cast<char *>(&encrypted_pair.second), sizeof(encrypted_pair.second));
    }

    input_file.close();
    output_file.close();
}

void decrypt_elgamal_file(const std::string &input_fname, const std::string &output_fname, long p, long cB)
{

    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if (!input_file && !output_file)
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
        return;
    }

    long r, e;
    while (input_file.read(reinterpret_cast<char *>(&r), sizeof(r)) &&
           input_file.read(reinterpret_cast<char *>(&e), sizeof(e)))
    {
        long decrypted_byte = elgamal_decrypt_message(p, r, e, cB);
        output_file.put(static_cast<char>(decrypted_byte));
    }

    input_file.close();
    output_file.close();
}

void encrypt_rsa_file(const std::string &input_fname, const std::string &output_fname, long N, long dB)
{
    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if (!input_file && !output_file)
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
        return;
    }

    char byte;
    while (input_file.get(byte))
    {
        long encrypted_byte = rsa_encrypt_message(N, static_cast<unsigned char>(byte), dB);
        output_file.write(reinterpret_cast<char *>(&encrypted_byte), sizeof(encrypted_byte));
    }
    input_file.close();
    output_file.close();
}
void decrypt_rsa_file(const std::string &input_fname, const std::string &output_fname, long N, long cB)
{
    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if (!input_file && !output_file)
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
        return;
    }

    long e;
    while (input_file.read(reinterpret_cast<char *>(&e), sizeof(e)))
    {
        long decrypted_byte = rsa_encrypt_message(N, (e), cB);
        output_file.put(static_cast<char>(decrypted_byte));
    }
    input_file.close();
    output_file.close();
}

void en_de_crypt_vernam_file(const std::string &input_fname, const std::string &output_fname, const std::string &key)
{
    std::ifstream input_file(input_fname, std::ios::binary);
    std::ofstream output_file(output_fname, std::ios::binary);

    if (!input_file || !output_file)
    {
        std::cerr << "Не удалось открыть один из файлов" << std::endl;
        return;
    }

    char byte;
    size_t key_index = 0;
    while (input_file.get(byte))
    {
        xor_char(byte, key[key_index]);
        output_file.put(byte);
        key_index = (key_index + 1) % key.size();
    }

    input_file.close();
    output_file.close();
}

void readFileforSign(const std::string &filename, MD5 &md5)
{
    std::ifstream file(filename, std::ios::binary);
    if (!file)
    {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    const int bufferSize = 1024; // Размер буфера для чтения
    char buffer[bufferSize];
    while (file.read(buffer, bufferSize))
    {
        md5.update(buffer, file.gcount());
    }
    md5.update(buffer, file.gcount()); // Обновление хеша для последнего неполного блока
    file.close();
}

void saveSignature(const std::string &filename, const std::vector<long long> &signature)
{
    std::ofstream file(filename, std::ios::binary);
    if (!file)
    {
        std::cerr << "Error opening file for writing: " << filename << std::endl;
        return;
    }

    for (long long s : signature)
    {
        file.write(reinterpret_cast<const char *>(&s), sizeof(s));
    }
    file.close();
}