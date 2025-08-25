#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 1000000

// Параметры распределения
#define A 2.767     // Значение параметра a (можно изменить)
#define B (2.8 * A) // Значение параметра b, вычисленное из условия 0.7a = b/4

// Функция для генерации случайного числа в интервале [0, 1)
double
random_uniform()
{
    return (double)rand() / RAND_MAX;
}

// Обратная функция для генерации случайных чисел
double inverse_transform(double y)
{
    double F1 = 0.245 * A; // Значение F(1)

    if (y <= F1)
    {
        // Для y в интервале [0, F(1)]
        return 0.3 + sqrt(2 * y / A);
    }
    else
    {
        // Для y в интервале [F(1), 1]
        return 1.5 + cbrt((3 * (y - 0.245 * A) / B) - 0.125);
    }
}

int main()
{
    srand(time(NULL)); // Инициализация генератора случайных чисел

    // int num_samples = 1000; // Количество генерируемых случайных чисел
    double samples[N];

    // Генерация случайных чисел
    for (int i = 0; i < N; i++)
    {
        double u = random_uniform();       // Генерация равномерно распределенного числа
        samples[i] = inverse_transform(u); // Преобразование с помощью обратной функции
    }

    // Вывод сгенерированных чисел (для проверки)
    for (int i = 0; i < N; i++)
    {
        printf("%f\n", samples[i]);
    }

    return 0;
}