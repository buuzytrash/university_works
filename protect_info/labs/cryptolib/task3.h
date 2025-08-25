#pragma once
#include "task1.h"

std::vector<long long> rsa_sign(long cB, long N, std::vector<long long> hash);
void is_rsa_sign_valid(long dB, long N, std::vector<long long> sign, std::vector<long long> hash);

std::pair<long, long> elgamal_sign(long p, long g, long x, long h);
void is_elgamal_sign_valid(long p, long g, long s, long r, long h_check, long y);

void is_dsa_sign_valid(long long s, long long r, long long p, long long q, long long a, long long y, long long h);
long long dsa_sign(long long p, long long q, long long a, long long x, long long y, long long h);
