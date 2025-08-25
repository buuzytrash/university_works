#pragma once
#include "task1.h"

bool miller_rabin_test(long long n, int k);
long long random_generator_simple(long long min, long long max);
long long random_generator(long long min, long long max);
long generate_coprime(long p);
long mod_inverse(long c, long p_minus1);
long mod_inverse(long a, long m);
char xor_char(char a, char b);
std::string generate_key(size_t length);
size_t get_file_size(const std::string fname);