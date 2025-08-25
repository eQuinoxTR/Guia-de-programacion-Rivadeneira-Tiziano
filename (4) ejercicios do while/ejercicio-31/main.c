#include <stdio.h>

int main() {
    float sumatoria = 0, paralelo = 0;
    int res = 0;
    
    do {
        printf("ingresa la resistencia para calcular su paralelo, (0 para mostrar resultado) \n");
        scanf("%d", &res);
        switch(res) {
            case 0: 
                if (sumatoria) {paralelo = (float) 1/sumatoria;}
                printf("el resultado es %f ohms", paralelo);
            break;
            default:
                sumatoria += (float) 1/res;
                printf("%f \n", sumatoria);
        }
    } while (res);
    return 0;
}