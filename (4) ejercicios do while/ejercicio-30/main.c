#include <stdio.h>

int main() {
    float radio, perimetro, area;
    do {
        printf("ingresa tu radio para calcular la circunferencia y perimetro \n (0 para salir) \n");
        scanf("%f", &radio);
        
        if(radio != 0) {
            area = radio * radio * 3.14;
            perimetro = 2 * radio * 3.14;
            printf("area: %f, perimetro: %f\n", area, perimetro);
        }
    } while (radio != 0);
    
    return 0;
}