#include <stdio.h>

int main() {
    int dia, mes;
    printf("ingresa el dia en el que naciste ");
    scanf("%d", &dia);
    printf("ingresa el mes en el que naciste ");
    scanf("%d", &mes);
    if (dia >= 24 && dia <= 31 && mes == 10 || dia >= 1 && dia <= 22 && mes == 11 ) printf("sos de escorpio");
    else printf("no sos de escorpio");
    return 0;
}