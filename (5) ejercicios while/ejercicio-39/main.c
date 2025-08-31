#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;
    while (num >= 0) {
        printf("ingresa el numero ");
        scanf("%d", &num);
        if (num) printf("la raiz de %d es %f\n", num, (float) sqrt(num));
        else printf("error\n");
    }    return 0;
 }