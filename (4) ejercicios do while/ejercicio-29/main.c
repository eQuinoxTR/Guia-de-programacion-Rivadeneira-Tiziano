#include <stdio.h>

int main() {
    int n, i = 0, resultado = 0;
    printf("ingresa hasta que cantidad de numeros queres sumar, ej: 3, va a ser 1 + 2 + 3 ");
    scanf("%d", &n);
    do {
        resultado += i;
        i++;
    } while (i<=n);
    
    printf("%d", resultado);
    return 0;
}