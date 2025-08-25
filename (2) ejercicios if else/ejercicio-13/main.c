#include <stdio.h>

int main() {
    int num;
    printf("ingresa tu numero ");
    scanf("%d", &num);
    if (num == 0) printf("tu numero es igual a cero");
    else if (num > 0) printf("tu numero es mayor a cero");
    else if (num < 0) printf("tu numero es menor a cero");
    return 0;
}