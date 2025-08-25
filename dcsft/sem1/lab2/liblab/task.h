#pragma once

typedef struct
{
    int r;
    int t;
} Task;

Task *read_tasks_from_file(const char *filename, int *num_tasks);
