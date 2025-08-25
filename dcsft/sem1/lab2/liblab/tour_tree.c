#include "tour_tree.h"

TournamentTree *create_tree(int n)
{
    TournamentTree *tree = malloc(sizeof(TournamentTree));
    tree->size = n;
    tree->tree = calloc(2 * n, sizeof(int));
    return tree;
}
void update_tree(TournamentTree *tree, int index, int value)
{
    index += tree->size;
    tree->tree[index] = value;
    while (index > 1)
    {
        index /= 2;
        // tree->tree[index] = fmax(tree->tree[2 * index], tree->tree[2 * index + 1]);
        tree->tree[index] = (tree->tree[2 * index] > tree->tree[2 * index + 1]) ? tree->tree[2 * index] : tree->tree[2 * index + 1];
    }
}

int find_fit_tree(TournamentTree *tree, int value)
{
    int index = 1;
    while (index < tree->size)
    {
        if (tree->tree[2 * index] >= value)
        {
            index = 2 * index;
        }
        else
        {
            index = 2 * index + 1;
        }
    }
    return index - tree->size; // Возвращаем индекс уровня
}

int get_max_tree(TournamentTree *tree)
{
    return tree->tree[1];
}

void free_tree(TournamentTree *tree)
{
    free(tree->tree);
    free(tree);
}