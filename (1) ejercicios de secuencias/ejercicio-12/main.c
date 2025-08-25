#include <stdio.h>
#include <math.h> // Necesario para funciones como sqrt(), pow() y atan()

// Definimos el valor de PI para la conversión a grados
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double R, L, C, w;
    double Z, phi;


    printf("Ingrese la resistencia R: ");
    scanf("%lf", &R);
    printf("Ingrese la inductancia L: ");
    scanf("%lf", &L);
    printf("Ingrese la capacitancia C: ");
    scanf("%lf", &C);
    printf("Ingrese la frecuencia angular w: ");
    scanf("%lf", &w);

    double term_admitancia = pow(1.0 / R, 2) + pow((w * C - 1.0 / (w * L)), 2);
    Z = 1.0 / sqrt(term_admitancia);

    phi = -atan((w * C - 1.0 / (w * L)) * R);

    printf("Módulo de la impedancia Z: %.4f Ohms\n", Z);
    printf("Ángulo de la impedancia: %f radianes\n", phi);

    return 0; // El programa finaliza con éxito
}