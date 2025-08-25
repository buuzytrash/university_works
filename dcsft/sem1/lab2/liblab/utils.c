#include "utils.h"

double calculate_epsilon(int T, int T_prime)
{
    return (double)(T - T_prime) / T_prime;
}

int calculate_T_prime(Task *tasks, int num_tasks, int n)
{
    int sum_t = 0;
    for (int i = 0; i < num_tasks; i++)
    {
        sum_t += tasks[i].t;
    }
    return sum_t / n;
}