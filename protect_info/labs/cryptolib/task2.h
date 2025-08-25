#pragma once

#include "task1.h"
#include <unistd.h>

std::string vernam_cipher(const std::string &message, const std::string &key);

long shamir_encrypt_message(long p, long m, long cA, long cB);
long shamir_decrypt_message(long p, long x2, long cA, long cB);

std::pair<long, long> elgamal_encrypt_message(long p, long g, long m, long cB, long k);
long elgamal_decrypt_message(long p, long r, long e, long cB);

long rsa_encrypt_message(long N, long m, long dB);
long rsa_decrypt_message(long N, long e, long cB);
