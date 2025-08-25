#include <stdio.h>

int main() {
    float l, s, r;
    printf("ingresa la longitud del cable de cobre ");
    scanf("%f", &l);
    printf("ingresa el area del cable de cobre ");
    scanf("%f", &s);
    r = 0.000000017 * (l/s);
    printf("la resistencia es %f ohms", r);
    return 0;
}