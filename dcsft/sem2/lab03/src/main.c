#include <stdio.h>
#include <math.h>

// Функция для расчета mu_l
double get_mu_l(double mu, int m, int l, int N) {
    if ((N - m) <= l && l <= N) {
        return ((N - l) * mu);
    } else if (0 <= l && l < (N - m)) {
        return (m * mu);
    } else {
        printf("Error!\n");
        return -1;
    }
}

// Функция для расчета среднего времени безотказной работы (Theta)
double Theta(int n, double lambda, int m, double mu, int N) {
    double theta = 0;

    theta += 1 / (n * lambda);

    for (int j = n + 1; j <= N; j++) {
        double first = 1 / (j * lambda);

        double second = 1;
        for (int l = n; l < j; l++) {
            double mu_l = get_mu_l(mu, m, l, N);
            second *= mu_l / (l * lambda);
        }

        theta += first * second;
    }

    return theta;
}

// Функция для расчета среднего времени восстановления (T)
double T(int n, double lambda, int m, double mu, int N) {
    if (n == 1) {
        return (1 / mu);
    } else if (n < 0) {
        printf("ERROR!\n");
        return -1;
    }

    double T = 0;
    double first = 1;
    for (int l = 1; l <= n - 1; l++) {
        double mu_l = get_mu_l(mu, m, l, N);
        first *= (1 / mu) * ((l * lambda) / mu_l);
    }

    double second = 0;
    for (int j = 1; j <= n - 1; j++) {
        double product = 1;
        for (int l = j; l <= n - 1; l++) {
            double mu_l = get_mu_l(mu, m, l, N);
            product *= (l * lambda) / mu_l;
        }
        second += (1 / (j * lambda)) * product;
    }
    T += (first + second);

    return T;
}

// Функция для записи данных в файл
void write_to_file(const char *filename, int n, double value) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "%d %f\n", n, value);
    fclose(file);
}

// Функция для расчета вектора θ и записи в файл
void calculate_theta_vector(double lambda, double mu, int m, int N, int n_min, int n_max, const char *filename) {
    for (int n = n_min; n <= n_max; n++) {
        double theta = Theta(n, lambda, m, mu, N);
        write_to_file(filename, n, theta);
    }
}

// Функция для расчета вектора T и записи в файл
void calculate_T_vector(double lambda, double mu, int m, int N, int n_min, int n_max, const char *filename) {
    for (int n = n_min; n <= n_max; n++) {
        double t = T(n, lambda, m, mu, N);
        write_to_file(filename, n, t);
    }
}

int main() {
    // Параметры системы
    int N = 65536;
    double lambda_values[] = {1e-6, 1e-7, 1e-5};
    double mu_values[] = {1, 10, 100, 1000};
    int m_values[] = {1, 2, 3};
    int n_min = 65527;
    int n_max = 65536;

    // Расчет и запись данных для каждого набора параметров
    for (int i = 0; i < sizeof(lambda_values) / sizeof(lambda_values[0]); i++) {
        for (int j = 0; j < sizeof(mu_values) / sizeof(mu_values[0]); j++) {
            for (int k = 0; k < sizeof(m_values) / sizeof(m_values[0]); k++) {
                char filename_theta[100];
                char filename_T[100];
                sprintf(filename_theta, "theta_lambda_%.6f_mu_%d_m_%d.txt", lambda_values[i], (int)mu_values[j], m_values[k]);
                sprintf(filename_T, "T_lambda_%.6f_mu_%d_m_%d.txt", lambda_values[i], (int)mu_values[j], m_values[k]);

                // Расчет вектора θ и запись в файл
                calculate_theta_vector(lambda_values[i], mu_values[j], m_values[k], N, n_min, n_max, filename_theta);

                // Расчет вектора T и запись в файл
                calculate_T_vector(lambda_values[i], mu_values[j], m_values[k], N, n_min, n_max, filename_T);
            }
        }
    }

    printf("Расчет завершен. Данные записаны в файлы.\n");

    return 0;
}