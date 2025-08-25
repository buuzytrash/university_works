#pragma once

#include <cmath>
#include <iostream>
#include <bitset>
#include <random>
#include <stdexcept>
#include <string.h>
#include <cstring>

#include "utils.h"

long power_modulo(long a, long n, long m);
void gen_euclid(long a, long b, long &gcd, long &x, long &y);
void diffie_hellman(long p, long g);
long baby_giant(long a, long y, long p);
