#include <stdio.h>

int main() {
    int temp, cant = 0; 
    float sumatoria = 0;
    do {
        printf("ingresa tu temperatura en celcius (0 para salir) ");
        scanf("%d", &temp);
        if (temp > 4 && temp < 16) {
            sumatoria += (float) temp;
            cant++;
        }
    } while (temp);
    printf("El promedio de temperaturas entre 5 y 15 grados es %f", (float) sumatoria/cant);
    return 0;
}