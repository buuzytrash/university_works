#include "algorithms.h"
#include "task.h"
#include "tour_tree.h"
#include "utils.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc < 4)
    {
        fprintf(stderr, "Usage ./tasks <file> <n> <algorithm> (NFDH/FFDH) \n");
        exit(EXIT_FAILURE);
    }

    const char *filename = argv[1];

    int n = atoi(argv[2]);
    const char *algorithm = argv[3];

    int num_tasks = 0;
    Task *tasks = read_tasks_from_file(filename, &num_tasks);
    int T = 0;
    clock_t time_start = clock();

    if (strcmp(algorithm, "NFDH") == 0)
    {
        T = NFDH(tasks, num_tasks, n);
    }
    else if (strcmp(algorithm, "FFDH") == 0)
    {
        T = FFDH(tasks, num_tasks, n);
    }
    else
    {
        fprintf(stderr, "Unknown algorithm: %s\n", algorithm);
        exit(EXIT_FAILURE);
    }

    clock_t time_end = clock();
    double elapsed_time = (double)(time_end - time_start) / (CLOCKS_PER_SEC);

    int T_prime = 0;
    for (int i = 0; i < num_tasks; i++)
    {
        T_prime += tasks[i].t;
    }
    T_prime = T_prime / n;

    double epsilon = calculate_epsilon(T, T_prime);

    printf("Расписание задач выполнено с алгоритмом %s\n", algorithm);
    printf("T(S) = %d\n", T_prime);
    printf("Отклонение ε = %f\n", epsilon);
    printf("Время выполнения алгоритма: %f секунд\n", elapsed_time);

    free(tasks);
    return 0;
}