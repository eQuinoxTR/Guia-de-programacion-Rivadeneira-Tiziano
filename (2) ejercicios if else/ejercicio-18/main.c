#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("ingrese A ");
    scanf("%d", &a);
    printf("ingrese B ");
    scanf("%d", &b);
    printf("ingrese C ");
    scanf("%d", &c);

    int discriminante = pow(b, 2) - (4*a*c);
    printf("la discriminante es %d \n  \n", discriminante);
    
    if(discriminante > 0) {
        printf("la discriminante es menor a 0, por lo tanto tiene dos raices:\n");
        float x1 = (-b * 1.0 + sqrt(pow(b, 2) - (4*a*c)  * 1.0))/(2*a);
        float x2 = (-b  * 1.0 - sqrt(pow(b, 2) - (4*a*c) * 1.0))/(2*a);
        printf("%f %f", x1, x2);
    } else if(discriminante == 0) {
        printf("la discriminante es igual a 0, por lo tanto tiene una raiz:\n");
        float x1 = (-b * 1.0 - sqrt(pow(b, 2) - (4*a*c)  * 1.0))/(2*a);
        printf("%f", x1);
    } else if (discriminante < 0) {
        printf("la discriminante es menor a 0, por lo tanto no tiene raices\n");
    }

    return 0;
}
