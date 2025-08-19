#include <stdio.h>

int main() {
    int N, sumMulTres = 0, cantMulCinco = 0, sumPar = 0;
    for (int i = 1; i <= 10; i++) {
        printf("ingresa un numero natural ");
        scanf("%d", &N);
        if (N % 3 == 0) sumMulTres += N;
        if (N % 5 == 0) cantMulCinco++;
        if (i % 2 == 0) sumPar += N;
    }

    printf("la suma de los multiplos de 3 es %d, la cantidad de multiplos de 5 es %d y la suma de tus numeros en orden par es %d", sumMulTres, cantMulCinco, sumPar);

    return 0;
}