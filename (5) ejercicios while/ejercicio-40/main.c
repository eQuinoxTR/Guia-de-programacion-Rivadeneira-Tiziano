#include <stdio.h>

int main() {
    int opcion;
    printf("Bienvenido!");
    while (opcion != 2) {
        printf("Deasea terminar el programa? [1-SI 2-NO]: ");
        scanf("%d", &opcion);
        if (opcion > 2) printf("error\n");
    }
    printf("Hasta luego.");
    return 0;
}