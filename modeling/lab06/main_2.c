#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_SEGMENTS 10
#define SAMPLE_SIZE 6
#define N_ITERATIONS 1000

void generate_probabilities(double probs[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        probs[i] = (double)rand() / RAND_MAX;
        sum += probs[i];
    }
    for (int i = 0; i < n; i++) {
        probs[i] /= sum;
    }
}

void sampling_without_replacement(
    double probs[], int n, int sample_size,
    double selection_counts[N_SEGMENTS][SAMPLE_SIZE]) {
    double current_probs[N_SEGMENTS];
    int indices[N_SEGMENTS];

    for (int i = 0; i < n; i++) {
        current_probs[i] = probs[i];
        indices[i] = i;
    }

    for (int step = 0; step < sample_size; step++) {
        double total = 0.0;
        for (int i = 0; i < n - step; i++) {
            total += current_probs[i];
        }

        double random_val = ((double)rand() / RAND_MAX) * total;
        double cumsum = 0.0;
        int selected_idx = 0;

        for (int i = 0; i < n - step; i++) {
            cumsum += current_probs[i];
            if (random_val <= cumsum) {
                selected_idx = i;
                break;
            }
        }

        int original_idx = indices[selected_idx];
        selection_counts[original_idx][step] += 1.0;

        // Swap selected element with last unaccounted element
        double temp_prob = current_probs[selected_idx];
        current_probs[selected_idx] = current_probs[n - step - 1];
        current_probs[n - step - 1] = temp_prob;

        int temp_idx = indices[selected_idx];
        indices[selected_idx] = indices[n - step - 1];
        indices[n - step - 1] = temp_idx;
    }
}

void save_histogram_data(double matrix[N_SEGMENTS][SAMPLE_SIZE]) {
    FILE *file = fopen("histogram_data2.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Segment");
    for (int step = 0; step < SAMPLE_SIZE; step++) {
        fprintf(file, "\tStep%d", step + 1);
    }
    fprintf(file, "\n");

    for (int seg = 0; seg < N_SEGMENTS; seg++) {
        fprintf(file, "Seg%d", seg + 1);
        for (int step = 0; step < SAMPLE_SIZE; step++) {
            fprintf(file, "\t%.6f", matrix[seg][step] / N_ITERATIONS);
        }
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Histogram data saved to histogram_data2.txt\n");
}

int main() {
    srand(time(NULL));

    double initial_probs[N_SEGMENTS];
    generate_probabilities(initial_probs, N_SEGMENTS);

    printf("Initial segments and their probabilities:\n");
    for (int i = 0; i < N_SEGMENTS; i++) {
        printf("%.4f ", initial_probs[i]);
    }
    printf("\n");

    double result_matrix[N_SEGMENTS][SAMPLE_SIZE] = {0};

    for (int iter = 0; iter < N_ITERATIONS; iter++) {
        double probs[N_SEGMENTS];
        for (int i = 0; i < N_SEGMENTS; i++) {
            probs[i] = initial_probs[i];
        }

        double counts[N_SEGMENTS][SAMPLE_SIZE] = {0};
        sampling_without_replacement(probs, N_SEGMENTS, SAMPLE_SIZE, counts);

        for (int i = 0; i < N_SEGMENTS; i++) {
            for (int j = 0; j < SAMPLE_SIZE; j++) {
                result_matrix[i][j] += counts[i][j];
                printf("counts %.4f\n", counts[i][j]);
            }
        }
    }

    save_histogram_data(result_matrix);

    // printf("Results saved. Use external tools to visualize the data.\n");
    // printf("For GNUplot, you can use the following script:\n\n");
    // printf("set style data histogram\n");
    // printf("set style histogram clustered\n");
    // printf("set style fill solid\n");
    // printf("set boxwidth 0.8\n");
    // printf("set xtics rotate\n");
    // printf(
    //     "plot for [i=2:%d] 'histogram_data2.txt' using i:xtic(1) title "
    //     "columnheader(i)\n",
    //     SAMPLE_SIZE + 1);

    return 0;
}