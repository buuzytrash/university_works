#ifndef RSA_H
#define RSA_H

#include "graph.h"

struct RSA_keys
{
    long long N;
    long long e;
    long long d;
};

RSA_keys generate_keys();
long long mod_exp(long long base, long long exp, long long mod);
std::vector<std::vector<long long>> encrypt_graph(const Graph &graph, const RSA_keys &keys);
Graph decrypt_graph(const std::vector<std::vector<long long>>& encrypted_graph, const RSA_keys& keys);

#endif // RSA_H