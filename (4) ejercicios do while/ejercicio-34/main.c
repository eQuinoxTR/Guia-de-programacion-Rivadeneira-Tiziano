#include <stdio.h>

int main() {
    int sumatoria = 0, cant = 0, numIngresado;
    do {
        printf("ingresa tu numero ");
        scanf("%d", &numIngresado);
        sumatoria += numIngresado;
        cant++;
    } while (numIngresado != 15);
    printf(" La suma de todos los numeros es %d\n la cantidad de numeros ingresados es %d", sumatoria, cant);
    
    return 0;
}