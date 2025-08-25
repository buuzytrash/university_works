#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Генерация матрицы вероятностей
double** generate_probability_matrix(int n) {
    double** matrix = (double**)malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++) {
        matrix[i] = (double*)malloc(n * sizeof(double));
    }

    // Заполнение случайными значениями и подсчет сумм строк
    double* row_sums = (double*)calloc(n, sizeof(double));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (double)rand() / RAND_MAX;
            row_sums[i] += matrix[i][j];
        }
    }

    // Нормализация строк
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] /= row_sums[i];
        }
    }

    free(row_sums);
    return matrix;
}

// Симуляция цепи Маркова
int* simulate_markov_chain(double** matrix, int n, int iterations) {
    int* hit_counts = (int*)calloc(n, sizeof(int));
    int current_state = rand() % n;  // Начальное состояние

    for (int i = 0; i < iterations; i++) {
        hit_counts[current_state]++;

        // Генерация случайного числа
        double r = (double)rand() / RAND_MAX;

        // Поиск следующего состояния
        double cumulative_prob = 0.0;
        for (int j = 0; j < n; j++) {
            cumulative_prob += matrix[current_state][j];
            if (r <= cumulative_prob) {
                current_state = j;
                break;
            }
        }
    }

    return hit_counts;
}

// Сохранение данных для графика в файл
void save_results_to_file(int* hit_counts, int n) {
    FILE* file = fopen("results.txt", "w");
    if (file == NULL) {
        printf("Не удалось открыть файл для записи.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "%d %d\n", i, hit_counts[i]);
    }

    fclose(file);
    printf("Данные сохранены в файл results.txt\n");
    printf(
        "Используйте GNUplot или другой инструмент для построения графика.\n");
}

// Освобождение памяти матрицы
void free_matrix(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    srand(time(NULL));  // Инициализация генератора случайных чисел

    // Генерация размера матрицы
    int n = 8 + rand() % 5;  // От 8 до 12
    printf("Размер матрицы: %d x %d\n", n, n);

    // Генерация матрицы вероятностей
    double** matrix = generate_probability_matrix(n);

    // Симуляция цепи Маркова
    int iterations = 10000;
    int* hit_counts = simulate_markov_chain(matrix, n, iterations);

    // Вывод результатов
    printf("\nКоличество попаданий в строки:\n");
    for (int i = 0; i < n; i++) {
        printf("Строка %d: %d\n", i, hit_counts[i]);
    }

    // Сохранение результатов для построения графика
    save_results_to_file(hit_counts, n);

    // Освобождение памяти
    free_matrix(matrix, n);
    free(hit_counts);

    return 0;
}