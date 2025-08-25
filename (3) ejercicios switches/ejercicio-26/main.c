#include <stdio.h>

int main() {
    double l, s, p, r;
    int opcion;
    printf("ingresa el material del conductor \n[1-plata] [2-cobre] [3-oro] [4-aluminio] [5-turgsteno] [6-plata] ");
    scanf("%d", &opcion);
    printf("ingresa la longitud del cable ");
    scanf("%lf", &l);
    printf("ingresa el area del cable ");
    scanf("%lf", &s);

    switch (opcion) {
        case 1: p = 1.59e-8; break;
        case 2: p = 1.7e-8; break;
        case 3: p = 2.44e-8; break;
        case 4: p = 2.82e-8; break;
        case 5: p = 5.6e-8; break;
        case 6: p = 1.1e-7; break;
    }

    r = p * (l/s);
    printf("la resistencia es %.10lf ohms", r);
    return 0;
}