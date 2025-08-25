#include <stdio.h>

int main() {
    int peso, opcion, monto = 0; 
    printf("ingresa la distancia del viaje \m [1-corta] [2-media] [3-larga] ");
    scanf("%d", &opcion);

    if (opcion != 1) {
        printf("ingresa el peso de tu equipaje (kg) ");
        scanf("%d", &peso);
    }

    switch (opcion) {
        case 1:
            monto = 70;
            printf("tu tarifa es %d$", monto);
        break;
        case 2:
            monto = 100;
            if (peso > 20) monto += peso*2;
            printf("tu tarifa es %d$", monto);
        break;
        case 3:
            monto = 150;
            if (peso > 30) monto += peso*5;
            printf("tu tarifa es %d$", monto);
        break;
    }
    return 0;
}