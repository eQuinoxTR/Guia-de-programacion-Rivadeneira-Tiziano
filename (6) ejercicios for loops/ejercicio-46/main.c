#include <stdio.h>

int main() {
    int num, sumatoria = 0;
    printf("ingresa tu numero ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++) sumatoria += i;
    printf("la sumatoria desde 1 hasta %d es %d", num, sumatoria);
    return 0;
}