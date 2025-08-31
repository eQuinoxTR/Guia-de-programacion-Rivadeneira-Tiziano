#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    while (1) {
        printf("ingesa el lado de abajo ");
        scanf("%d", &lado1);
        printf("ingesa el lado izquierdo ");
        scanf("%d", &lado2);
        printf("ingesa el lado de derecho ");
        scanf("%d", &lado3);
        if ((lado2 + lado3) <= lado1) {
            printf("el lado derecho e izquierdo debe ser > a lado de abajo\n");
            continue; // descubri esto recien, te permite saltearte el codigo pero seguir con el bucle
        }
        if(lado1 == 0 || lado2 == 0 || lado3 == 0) printf("error");
        else if(lado1 == lado2 && lado2 == lado3) printf("equilatero\n");
        else if(lado2 == lado3 || lado1 == lado2 || lado1 == lado3) printf("isoceles\n");
        else if (lado1 != lado2 && lado2 != lado3) printf("escaleno\n");
    }
    return 0;
}