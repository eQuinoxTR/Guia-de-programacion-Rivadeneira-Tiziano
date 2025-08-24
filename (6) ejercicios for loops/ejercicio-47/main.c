#include <stdio.h>

int main() {
    int num;
    long long int factorial = 1;
    printf("ingresa tu numero (25 es el maximo posible) ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) factorial *= i;
    printf("el factorial de %d es %lld", num, factorial);
    return 0;
}