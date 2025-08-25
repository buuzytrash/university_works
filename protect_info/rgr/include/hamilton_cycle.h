#ifndef HAMILTON_CYCLE_H
#define HAMILTON_CYCLE_H

#include "rsa.h"
#include "graph.h"

bool zero_knowledge_proof(const Graph &graph, const std::vector<int> &hamilton_cycle, const RSA_keys &keys, int t);

#endif // HAMILTON_CYCLE_H