#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <string>

struct Graph // Структура для графа
{
    int n;                             // Количество вершин
    std::vector<std::vector<int>> adj; // Матрица смежности
};

Graph read_graph_from_file(const std::string &filename);                   // Чтение графа из файла
void generate_graph(int n, int m, const std::string &filename);            // Генерация графов в файл
std::vector<int> generate_hamilton_cycle(const Graph &graph);              // Генерация гамильтонова цикла
bool is_hamilton_cycle(const Graph &graph, const std::vector<int> &cycle); //
Graph permuteGraph(const Graph &graph, const std::vector<int> &permutation);

#endif // GRAPH_H