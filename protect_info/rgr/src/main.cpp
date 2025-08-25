#include <iostream>
#include "../include/graph.h"
#include "../include/rsa.h"
#include "../include/hamilton_cycle.h"

int main()
{
    // Генерация случайного графа и запись его в файл
    int n = 1000;            // Количество вершин
    int m = n * (n - 1) / 2; // Максимальное количество рёбер
    std::cout << "Генерируем граф с n = " << n << " и m = " << m << "..." << std::endl;
    generate_graph(n, m, "graph.txt");

    std::cout << "Генерируем гамильтонов цикл и ключи для шифрования..." << std::endl;
    // Чтение графа из файла
    Graph graph = read_graph_from_file("graph.txt");

    // Генерация гамильтонова цикла
    std::vector<int> hamiltonianCycle = generate_hamilton_cycle(graph);

    // Генерация ключей RSA
    RSA_keys keys = generate_keys();

    // Количество раундов протокола
    int t = 40;
    std::cout << "Количество раундов протокола t = " << t << std::endl;

    // Проверка протокола доказательства с нулевым знанием
    bool result = zero_knowledge_proof(graph, hamiltonianCycle, keys, t);

    if (result)
    {
        std::cout << "Гамильтонов цикл найден и подтвержден." << std::endl;
    }
    else
    {
        std::cout << "Гамильтонов цикл не найден или не подтвержден." << std::endl;
    }

    return 0;
}