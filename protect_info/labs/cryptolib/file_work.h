#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include "md5.h"

void encrypt_shamir_file(const std::string &input_fname, const std::string &output_fname, long p, long cA, long cB);
void decrypt_shamir_file(const std::string &input_fname, const std::string &output_fname, long p, long cA, long cB);

void encrypt_elgamal_file(const std::string &input_fname, const std::string &output_fname, long p, long g, long cB, long k);
void decrypt_elgamal_file(const std::string &input_fname, const std::string &output_fname, long p, long cB);

void encrypt_rsa_file(const std::string &input_fname, const std::string &output_fname, long N, long dB);
void decrypt_rsa_file(const std::string &input_fname, const std::string &output_fname, long N, long cB);

void en_de_crypt_vernam_file(const std::string &input_fname, const std::string &output_fname, const std::string &key);

void readFileforSign(const std::string &filename, MD5 &md5);
void saveSignature(const std::string &filename, const std::vector<long long> &signature);