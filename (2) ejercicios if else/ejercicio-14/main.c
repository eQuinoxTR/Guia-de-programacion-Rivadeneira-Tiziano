#include <stdio.h>

int main() {
    int num;
    printf("ingresa tu numero ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("tu numero es par");
    else printf("tu numero es impar");
    return 0;
}