#include <stdio.h>

int main() {
    int mul = 10, num;
    printf("ingresa tu numero ");
    scanf("%d", &num);
    for (int i = 0; i < mul; i++) printf("%d * %d = %d \n", num, i, num*i);
    return 0;
}