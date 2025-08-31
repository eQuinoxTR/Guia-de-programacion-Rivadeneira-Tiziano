#include <stdio.h>

int main() {
    int opcion;
    double Ra, Rb, Rc, R1, R2, R3;

    while (1) {
        printf("\nCalculadora de Conversion Triangulo-Estrella\n");
        printf("1. Triangulo a Estrella\n");
        printf("2. Estrella a Triangulo\n");
        printf("Ingrese su opcion (1-2): ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese Resistencia Ra en ohmios: ");
            scanf("%lf", &Ra);
            printf("Ingrese Resistencia Rb en ohmios: ");
            scanf("%lf", &Rb);
            printf("Ingrese Resistencia Rc en ohmios: ");
            scanf("%lf", &Rc);

            printf("\nConversion de Triangulo a Estrella:\n");
            printf("R1: %.4f ohmios\n", (Rb * Rc) / (Ra + Rb + Rc));
            printf("R2: %.4f ohmios\n", (Ra * Rc) / (Ra + Rb + Rc));
            printf("R3: %.4f ohmios\n", (Ra * Rb) / (Ra + Rb + Rc));
        } else {
            printf("Ingrese Resistencia R1 en ohmios: ");
            scanf("%lf", &R1);
            printf("Ingrese Resistencia R2 en ohmios: ");
            scanf("%lf", &R2);
            printf("Ingrese Resistencia R3 en ohmios: ");
            scanf("%lf", &R3);

            printf("\nConversion de Estrella a Triangulo:\n");
            printf("Ra: %.4f ohmios\n", (R1 * R2 + R2 * R3 + R1 * R3) / R1);
            printf("Rb: %.4f ohmios\n", (R1 * R2 + R2 * R3 + R1 * R3) / R2);
            printf("Rc: %.4f ohmios\n", (R1 * R2 + R2 * R3 + R1 * R3) / R3);
        }
    }

    return 0;
}