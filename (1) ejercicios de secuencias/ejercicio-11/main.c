#include <stdio.h>
#include <math.h>

int main() {
    double R, L, C, w;
    double Z, phi;       

    printf("Ingresa la resistencia R: ");
    scanf("%lf", &R);
    printf("Ingresa la inductancia L: ");
    scanf("%lf", &L);
    printf("Ingresa la capacitancia C: ");
    scanf("%lf", &C);
    printf("Ingresa la frecuencia angular w: ");
    scanf("%lf", &w);
    
    double X = w*L - 1.0/(w*C);
    Z = sqrt(pow(R, 2) + pow(X, 2));
    phi = atan(X / R);

    printf("\nImpedancia del circuito RLC serie:\n");
    printf("Módulo Z = %lf ohm\n", Z);
    printf("Ángulo phi = %lf rad \n", phi);

    return 0;
}