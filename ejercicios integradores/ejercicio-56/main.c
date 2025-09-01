#include <stdio.h>

int main() {
    double temp, suma = 0, max = -9999, min = 9999;
    int i, orden_max = 0, orden_min = 0, cantidad_rango = 0;

    for (i = 1; i <= 12; i++) {
        printf("Ingrese la temperatura %d (en °C): ", i);
        scanf("%lf", &temp);

        suma += temp;

        if (temp > max) {
            max = temp;
            orden_max = i;
        }

        if (temp < min) {
            min = temp;
            orden_min = i;
        }

        if (temp >= 5 && temp <= 35) {
            cantidad_rango++;
        }
    }

    printf("\nTemperatura maxima: %.2f °C (ingresada en la posicion %d)\n", max, orden_max);
    printf("Temperatura minima: %.2f °C (ingresada en la posicion %d)\n", min, orden_min);
    printf("Promedio de temperaturas: %.2f °C\n", suma / 12);
    printf("Cantidad de temperaturas entre 5 y 35 °C: %d\n", cantidad_rango);

    return 0;
}