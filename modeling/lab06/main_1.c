#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_PROBABILITIES 10
#define NUM_SAMPLES 1000

int main() {
    srand(time(NULL));  // Инициализация генератора случайных чисел

    // Шаг 1: Генерация 10 случайных чисел и их нормализация
    double random_numbers[NUM_PROBABILITIES];
    double sum = 0.0;

    printf("Сгенерированные случайные числа: ");
    for (int i = 0; i < NUM_PROBABILITIES; i++) {
        random_numbers[i] = (double)rand() / RAND_MAX;
        sum += random_numbers[i];
        printf("%.4f ", random_numbers[i]);
    }
    printf("\n");

    double normalized_probabilities[NUM_PROBABILITIES];
    printf("Нормализованные вероятности: ");
    for (int i = 0; i < NUM_PROBABILITIES; i++) {
        normalized_probabilities[i] = random_numbers[i] / sum;
        printf("%.4f ", normalized_probabilities[i]);
    }
    printf("\n");

    // Шаг 2: Создание отрезков вероятностей
    double cumulative_probabilities[NUM_PROBABILITIES];
    cumulative_probabilities[0] = normalized_probabilities[0];
    for (int i = 1; i < NUM_PROBABILITIES; i++) {
        cumulative_probabilities[i] =
            cumulative_probabilities[i - 1] + normalized_probabilities[i];
    }

    printf("Кумулятивные вероятности (границы отрезков): ");
    for (int i = 0; i < NUM_PROBABILITIES; i++) {
        printf("%.4f ", cumulative_probabilities[i]);
    }
    printf("\n");

    // Шаг 3: Моделирование выборки с возвращением
    int frequencies[NUM_PROBABILITIES] = {0};
    for (int s = 0; s < NUM_SAMPLES; s++) {
        double sample = (double)rand() / RAND_MAX;
        for (int i = 0; i < NUM_PROBABILITIES; i++) {
            if (sample <= cumulative_probabilities[i]) {
                frequencies[i]++;
                break;
            }
        }
    }

    // Шаг 4: Подсчет эмпирических вероятностей
    double empirical_probabilities[NUM_PROBABILITIES];
    printf("Эмпирические вероятности: ");
    for (int i = 0; i < NUM_PROBABILITIES; i++) {
        empirical_probabilities[i] = (double)frequencies[i] / NUM_SAMPLES;
        printf("%.4f ", empirical_probabilities[i]);
    }
    printf("\n");

    // Шаг 5: Сохранение данных для гистограммы в файл
    FILE *file = fopen("histogram_data.txt", "w");
    if (file == NULL) {
        printf("Ошибка при открытии файла для записи.\n");
        return 1;
    }

    fprintf(file, "Отрезок Начальная_вероятность Эмпирическая_вероятность\n");
    for (int i = 0; i < NUM_PROBABILITIES; i++) {
        fprintf(file, "%d %.4f %.4f\n", i + 1, normalized_probabilities[i],
                empirical_probabilities[i]);
    }
    fclose(file);

    printf("Данные для гистограммы сохранены в файл 'histogram_data.txt'\n");
    printf(
        "Для построения графика используйте GNUplot или другой инструмент "
        "визуализации.\n");

    return 0;
}