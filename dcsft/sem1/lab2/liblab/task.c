#include <stdio.h>
#include <stdlib.h>
#include "task.h"

Task *read_tasks_from_file(const char *filename, int *num_tasks)
{
    FILE *file = fopen(filename, "r");
    if (!file)
    {
        fprintf(stderr, "Ошибка открытия файла!\n");
        exit(1);
    }

    Task *tasks = NULL;
    int r, t;
    *num_tasks = 0;

    while (fscanf(file, "%d %d", &r, &t) == 2)
    {
        tasks = (Task *)realloc(tasks, (*num_tasks + 1) * sizeof(Task));
        tasks[*num_tasks].r = r;
        tasks[*num_tasks].t = t;
        (*num_tasks)++;
    }

    fclose(file);
    return tasks;
}