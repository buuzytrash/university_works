#include "../include/graph.h"
#include <fstream>
#include <algorithm>
#include <random>

Graph read_graph_from_file(const std::string &filename)
{
    std::ifstream file(filename);
    Graph graph;
    int m;
    file >> graph.n >> m;
    graph.adj.resize(graph.n, std::vector<int>(graph.n, 0));

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        file >> u >> v;
        graph.adj[u][v] = 1;
        graph.adj[v][u] = 1;
    }

    return graph;
}
void generate_graph(int n, int m, const std::string &filename)
{
    std::ofstream file(filename);
    file << n << " " << m << std::endl;

    std::vector<std::vector<bool>> adj(n, std::vector<bool>(n, false));
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, n - 1);

    int edges = 0;
    while (edges < m)
    {
        int u = dis(gen);
        int v = dis(gen);
        if (u != v && !adj[u][v])
        {
            adj[u][v] = true;
            adj[v][u] = true;
            file << u << " " << v << std::endl;
            edges++;
        }
    }
}
std::vector<int> generate_hamilton_cycle(const Graph &graph)
{
    std::vector<int> cycle(graph.n);
    for (int i = 0; i < graph.n; ++i)
    {
        cycle[i] = i;
    }
    std::random_shuffle(cycle.begin(), cycle.end());
    return cycle;
}

bool is_hamilton_cycle(const Graph &graph, const std::vector<int> &cycle)
{
    for (int i = 0; i < graph.n; ++i)
    {
        int u = cycle[i];
        int v = cycle[(i + 1) % graph.n];
        if (graph.adj[u][v] == 0)
        {
            return false;
        }
    }
    return true;
}
Graph permuteGraph(const Graph &graph, const std::vector<int> &permutation)
{
    Graph permuted_graph;
    permuted_graph.n = graph.n;
    permuted_graph.adj.resize(graph.n, std::vector<int>(graph.n, 0));

    for (int i = 0; i < graph.n; ++i)
    {
        for (int j = 0; j < graph.n; ++j)
        {
            permuted_graph.adj[permutation[i]][permutation[j]] = graph.adj[i][j];
        }
    }
    return permuted_graph;
}