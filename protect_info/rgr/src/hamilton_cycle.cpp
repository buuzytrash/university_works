#include "../include/hamilton_cycle.h"
#include <random>
#include <iostream>

bool zero_knowledge_proof(const Graph &graph, const std::vector<int> &hamilton_cycle, const RSA_keys &keys, int t)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 1);
    int q_res[2] = {0, 0};

    for (int round = 0; round < t; ++round)
    {
        // Шаг 1: Алиса строит граф H, изоморфный G, и шифрует его
        std::vector<int> permutation = generate_hamilton_cycle(graph);
        Graph permited_graph = permuteGraph(graph, permutation);
        std::vector<std::vector<long long>> encrypted_graph = encrypt_graph(permited_graph, keys);

        // Шаг 2: Боб задает один из двух вопросов
        int bit = dis(gen);

        if (bit == 0)
        {
            // Боб просит показать гамильтонов цикл в H
            std::vector<int> permuted_cycle(graph.n);
            for (int i = 0; i < graph.n; ++i)
            {
                permuted_cycle[i] = permutation[hamilton_cycle[i]];
            }
            if (!is_hamilton_cycle(permited_graph, permuted_cycle))
            {
                return false;
            }
            q_res[0]++;
        }
        else
        {
            // Боб просит показать, что H изоморфен G
            Graph decrypted_graph = decrypt_graph(encrypted_graph, keys);
            if (decrypted_graph.adj != permited_graph.adj)
            {
                return false;
            }
            q_res[1]++;
        }
    }

    std::cout << "Боб задавал вопрос 1 " << q_res[0] << " раз" << std::endl;
    std::cout << "Боб задавал вопрос 2 " << q_res[1] << " раз" << std::endl;

    return true;
}