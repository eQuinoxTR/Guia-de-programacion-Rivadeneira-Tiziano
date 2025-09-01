#include <stdio.h>

int main() {
    double valor, suma_antes_10 = 0, max = -9999;
    int i = 1, encontrado_10 = 0;

    do {
        do {
            printf("Ingrese el valor %d (entre -5 y 25, o fuera de rango para terminar): ", i);
            scanf("%lf", &valor);
            if ((valor >= -5 && valor <= 25) && (valor < -5 || valor > 25)) {
                printf("Valor invalido. Intente nuevamente.\n");
            }
        } while (valor >= -5 && valor <= 25 && (valor < -5 || valor > 25));

        if (valor < -5 || valor > 25) {
            break;
        }

        if (valor == 10 && !encontrado_10) {
            encontrado_10 = 1;
            printf("Suma de valores antes del primer 10: %.2f\n", suma_antes_10);
        }

        if (!encontrado_10) {
            suma_antes_10 += valor;
        }

        if (valor > max) {
            max = valor;
        }

        i++;
    } while (1);

    if (i > 1) {
        printf("Mayor valor ingresado: %.2f\n", max);
    } else {
        printf("No se ingresaron valores validos.\n");
    }

    return 0;
}