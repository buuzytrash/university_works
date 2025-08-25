#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int *tree;
    int size;
} TournamentTree;

TournamentTree *create_tree(int n);
void update_tree(TournamentTree *tree, int index, int value);
int find_fit_tree(TournamentTree *tree, int value);
int get_max_tree(TournamentTree *tree);
void free_tree(TournamentTree *tree);