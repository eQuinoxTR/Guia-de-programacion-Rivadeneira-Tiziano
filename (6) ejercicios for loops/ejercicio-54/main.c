#include <stdio.h>
#include <math.h>

float calcularDistancia(int x, int y) {
    return (float) sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    float FlechaMasCercana1 = 0, FlechaMasCercana2 = 0, distanciaUltTiro;
    int x, y;

    for (int i = 1; i <= 10; i++) {
        if (i >= 1 && i <= 5) { // turnos del jugador 1
            printf("\n");
            printf("ingresa la cordenada X para el jugador 1: ");
            scanf("%d", &x);
            printf("ingresa la cordenada Y para el jugador 1: ");
            scanf("%d", &y);
            distanciaUltTiro = calcularDistancia(x, y);
            if (distanciaUltTiro < FlechaMasCercana1 || FlechaMasCercana1 == 0) FlechaMasCercana1 = distanciaUltTiro;
        } else if (i >= 6 && i <= 10) { // turnos del jugador 2
            printf("\n");
            printf("ingresa la cordenada X para el jugador 2: ");
            scanf("%d", &x);
            printf("ingresa la cordenada Y para el jugador 2: ");
            scanf("%d", &y);
            distanciaUltTiro = calcularDistancia(x, y);
            if (distanciaUltTiro < FlechaMasCercana2 || FlechaMasCercana2 == 0) FlechaMasCercana2 = distanciaUltTiro;
        }

    }

    if (FlechaMasCercana1 < FlechaMasCercana2) printf("jugador 1 gana, su tiro mas cercano es %f cm ", FlechaMasCercana1);
    else if (FlechaMasCercana2 < FlechaMasCercana1) printf("jugador 2 gana, su tiro mas cercano es %f cm ", FlechaMasCercana2);
    return 0;
}

