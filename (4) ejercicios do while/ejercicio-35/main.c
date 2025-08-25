#include <stdio.h>

int main() {
    int temp, cant = 0;
    do {
        printf("ingresa tu temperatura en celcius ");
        scanf("%d", &temp);
        if (temp > 4 && temp < 16) cant++;
    } while (temp);
    printf("La cantidad de temperaturas entre 5 y 15 grados son %d", cant);
    return 0;
}