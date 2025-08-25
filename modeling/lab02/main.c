#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double degrees_to_rad(double degrees) { return (degrees * M_PI / 180.0); }

int main() {
    srand(time(NULL));

    double a = 0.0, b = 0.0, R = 1.0;
    double phi1 = 30.0, phi2 = 135.0;

    double phi1_rad = degrees_to_rad(phi1);
    double phi2_rad = degrees_to_rad(phi2);

    int num_points = 10000;

    FILE *file_inside = fopen("points_inside.dat", "w");
    FILE *file_outside = fopen("points_outside.dat", "w");
    if (file_inside == NULL || file_outside == NULL) {
        perror("Error opening file!\n");
        return -1;
    }

    for (int i = 0; i < num_points; i++) {
        // double r = (double)rand() / RAND_MAX * R;
        double xi = (double)rand() / RAND_MAX;
        double r = R * sqrt(xi);

        double theta =
            phi1_rad + (double)rand() / RAND_MAX * (phi2_rad - phi1_rad);

        double x = a + r * cos(theta);
        double y = b + r * sin(theta);

        fprintf(file_inside, "%.4f %.4f\n", x, y);
    }

    for (int i = 0; i < num_points; i++) {
        double theta_arc =
            phi1_rad + (double)rand() / RAND_MAX * (phi2_rad - phi1_rad);
        double x_arc = a + R * cos(theta_arc);
        double y_arc = b + R * sin(theta_arc);
        fprintf(file_outside, "%.4f %.4f\n", x_arc, y_arc);

        // double r_chord = (double)rand() / RAND_MAX * R;
        double xi = (double)rand() / RAND_MAX;
        double r_chord = R * sqrt(xi);
        double x_chord1 = a + r_chord * cos(phi1_rad);
        double y_chord1 = b + r_chord * sin(phi1_rad);

        double x_chord2 = a + r_chord * cos(phi2_rad);
        double y_chord2 = b + r_chord * sin(phi2_rad);

        fprintf(file_outside, "%.4f %.4f\n", x_chord1, y_chord1);
        fprintf(file_outside, "%.4f %.4f\n", x_chord2, y_chord2);
    }

    fclose(file_inside);
    fclose(file_outside);
    printf("Points generated and saved to files\n");

    return 0;
}
