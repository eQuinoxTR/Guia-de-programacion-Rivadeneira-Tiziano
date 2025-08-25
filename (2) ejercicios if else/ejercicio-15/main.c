#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main() {
    float fo, f, w, l, c, wl, wc;
    printf("ingresa L ");
    scanf("%f", &l);
    printf("ingresa C ");
    scanf("%f", &c);
    printf("ingresa F ");
    scanf("%f", &f);

    fo = 1/(2*pi*sqrt(l*c));
    w = 2*pi*f;
    wl =  w * l;
    wc = w * c;

    if (wl < 1/wc) printf("capacitivo");
    else if (wl = 1/wc) printf("resistivo");
    else if (wl > 1/wc) printf("inductivo");
    printf("\nsu frecuencia de resoncancia es %f", f);

    return 0;
}