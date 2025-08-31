#include <stdio.h>
#include <math.h>

int main() {
    int opcion;
    double R, L, C;

    while (1) {
        printf("\n=== Calculadora de Circuito RLC ===\n");
        printf("1. Circuito RLC Serie\n");
        printf("2. Circuito RLC Paralelo\n");
        printf("Ingrese su opcion (1-2): ");
        scanf("%d", &opcion);

        printf("Ingrese Resistencia (R) en ohmios: ");
        scanf("%lf", &R);
        printf("Ingrese Inductancia (L) en henrios: ");
        scanf("%lf", &L);
        printf("Ingrese Capacitancia (C) en faradios: ");
        scanf("%lf", &C);

        if (R <= 0 || L <= 0 || C <= 0) {
            printf("Error: R, L y C deben ser positivos y no cero!\n");
            continue; // descubri esto recien, te permite saltearte el codigo pero seguir con el bucle
        }

        if (opcion == 1) {
            printf("\nCalculos Circuito RLC Serie:\n");
            printf("Frecuencia de Resonancia (f0): %.4f Hz\n", 1.0 / (2.0 * 3.14 * sqrt(L * C)));
            printf("Ancho de Banda (Δω): %.4f rad/s\n", R / L);
            printf("Factor de Merito (Q): %.4f\n", (1.0 / R) * sqrt(L / C));
        } else if (opcion == 2) {
            printf("\nCalculos Circuito RLC Paralelo:\n");
            printf("Frecuencia de Resonancia (f0): %.4f Hz\n", 1.0 / (2.0 * 3.14 * sqrt(L * C)));
            printf("Ancho de Banda (Δω): %.4f rad/s\n", 1.0 / (R * C));
            printf("Factor de Merito (Q): %.4f\n", R * sqrt(C / L));
        }
    }

    return 0;
}