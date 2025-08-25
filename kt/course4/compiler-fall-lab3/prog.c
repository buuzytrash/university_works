#include <stdio.h>

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    printf("Hello\n");
    printf("%f\n", sum(1.0, 2.0));
    return 0;
}