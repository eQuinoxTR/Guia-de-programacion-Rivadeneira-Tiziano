#include <stdio.h>

int main() {
    int a, b,c;
    printf("ingresa el numero 1 ");
    scanf("%d", a);
    printf("ingresa el numero 2 ");
    scanf("%d", b);
    printf("ingresa el numero 3 ");
    scanf("%d", c);

   if(a>b && a>c) {
        printf("el numero mas grande es %d", a);
    } else if(b>a && b>c) {
        printf("el numero mas grande es %d", b);
    } else if(c>b && c>a) {
        printf("el numero mas grande es %d", c);
    }

    return 0;
}