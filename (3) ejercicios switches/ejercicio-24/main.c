#include <stdio.h>
#include <math.h>

int main() {
    int notacion, x, y;
    float r, angulo;
    printf("Elegir notacion binomica o polar \n[1-binomica] [2-polar] ");
    scanf("%d", &notacion);
    switch (notacion){
        case 1:
            printf("Escribir X ");
            scanf("%d", &x);
            printf("Escribir y ");
            scanf("%d", &y);
            r = (float) sqrt(pow(x, 2) + pow(y, 2));
            angulo = (float) atan(y/x);
            printf("forma binomica a polar: z = (%f;%f°)", r, angulo*180/3.14);
        break;
        case 2:
            printf("Escribir r ");
            scanf("%f", &r);
            printf("Escribir el angulo ");
            scanf("%f", &angulo);
            x = r*cos(angulo);
            y = r*sin(angulo);
            printf("forma polar a binomica: z = %d + (%di)", x, y);
        break;
    }
    return 0;
}