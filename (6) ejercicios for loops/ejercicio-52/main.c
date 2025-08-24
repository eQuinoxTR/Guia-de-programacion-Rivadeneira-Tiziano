#include <stdio.h>

int main() {
    int temp, sum = 0, cant = 0;
    for (int i = 1; i <= 12; i++) {
        printf("ingresa tu temperatura ");
        scanf("%d", &temp);
        if (temp >= 5 && temp <=15) {
            sum += temp;
            cant++;
        }
    }
    printf("el promedio de las temperaturas entre 5 y 15 es %f", (float) sum/cant);
    return 0;
}