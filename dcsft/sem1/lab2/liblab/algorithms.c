#include <stdlib.h>
#include "algorithms.h"

void counting_sort(Task *tasks, int num_tasks, int max_r)
{
    int *count = (int *)calloc(max_r + 1, sizeof(int));
    Task *output = (Task *)malloc(num_tasks * sizeof(Task));

    for (int i = 0; i < num_tasks; i++)
    {
        count[tasks[i].r]++;
    }

    for (int i = 1; i <= max_r; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = num_tasks - 1; i >= 0; i--)
    {
        output[count[tasks[i].r] - 1] = tasks[i];
        count[tasks[i].r]--;
    }

    for (int i = 0; i < num_tasks; i++)
    {
        tasks[i] = output[i];
    }

    free(count);
    free(output);
}

int NFDH(Task *tasks, int num_tasks, int n)
{
    counting_sort(tasks, num_tasks, n);
    int total_time = 0;
    int current_level_capacity = n;
    int current_level_time = 0;

    for (int i = 0; i < num_tasks; i++)
    {
        if (tasks[i].r <= current_level_capacity)
        {
            current_level_capacity -= tasks[i].r;
            current_level_time = (current_level_time > tasks[i].t) ? current_level_time : tasks[i].t;
        }
        else
        {
            total_time += current_level_time;
            current_level_capacity = n - tasks[i].r;
            current_level_time = tasks[i].t;
        }
    }
    total_time += current_level_time;
    return total_time;
}

int FFDH(Task *tasks, int num_tasks, int n)
{
    counting_sort(tasks, num_tasks, n);

    TournamentTree *tree = create_tree(n);

    for (int i = 0; i < n; i++)
    {
        update_tree(tree, i, n);
    }

    int total_time = 0;

    for (int i = 0; i < num_tasks; i++)
    {
        int level = find_fit_tree(tree, tasks[i].r);
        update_tree(tree, level, get_max_tree(tree) - tasks[i].r);
        total_time = (total_time > tasks[i].t) ? total_time : tasks[i].t;
    }

    free_tree(tree);
    return total_time;
}