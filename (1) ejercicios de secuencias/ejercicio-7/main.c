#include <stdio.h>

int main() {
    int temp1, temp2, temp3;
    printf("escribi tu primera temperatura ");
    scanf("%d", &temp1);
    printf("escribi tu segunda temperatura ");
    scanf("%d", &temp2);
    printf("escribi tu tercera temperatura ");
    scanf("%d", &temp3);
    float temperatura = (temp1 + temp2 + temp3) * 1.0 / 3;
    printf("tu temperatura es %f", temperatura);
    return 0;
}