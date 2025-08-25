#include <stdio.h>
#include <math.h>

int main() {
    float s, p, q;
    int opcion;
    printf("que quiere calcular? \n[1-Potencia activa] [2-Potencia reactiva] [3-Potencia aparente] ");
    scanf("%d", &opcion);
    switch (opcion) {
        case 1: 
            printf("ingrese la potencia aparente ");
            scanf("%f", &s);
            printf("ingrese la potencia reactiva ");
            scanf("%f", &q);
            p = (float) sqrt(pow(s, 2) - pow(q, 2));
        break;
        case 2:
            printf("ingrese la potencia aparente ");
            scanf("%f", &s);
            printf("ingrese la potencia activa ");
            scanf("%f", &p);
            q = (float) sqrt(pow(s, 2) - pow(p, 2));
        break;
        case 3: 
            printf("ingrese la potencia activa ");
            scanf("%f", &p);
            printf("ingrese la potencia reactiva ");
            scanf("%f", &q);
            s = (float) sqrt(pow(p, 2) + pow(q, 2));
            printf("la potencia aparente es %f", s);
        break;
    }

    return 0;
}