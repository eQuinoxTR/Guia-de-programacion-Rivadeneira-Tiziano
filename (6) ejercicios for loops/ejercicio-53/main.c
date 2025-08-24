#include <stdio.h>

int main() {
    int num;
    printf("ingresa unnumero natural para determinar por que numeros es divisible ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) printf("%d es divisible por %d\n", num, i);
    }
    return 0;
}