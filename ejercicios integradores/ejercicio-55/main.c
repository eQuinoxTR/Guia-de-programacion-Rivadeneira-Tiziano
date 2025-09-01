#include <stdio.h>

int main() {
    int i, nota, cantidad = 0, menor = 11;

    for (i = 1; i <= 5; i++) {
        do {
            printf("Ingrese la nota %d (entre 1 y 10): ", i);
            scanf("%d", &nota);
            if (nota < 1 || nota > 10) {
                printf("Nota invalida. Intente nuevamente.\n");
            }
        } while (nota < 1 || nota > 10);

        if (nota >= 6 && nota <= 10) {
            cantidad++;
        }

        if (nota < menor) {
            menor = nota;
        }
    }

    printf("\nCantidad de notas entre 6 y 10: %d\n", cantidad);
    printf("La menor nota ingresada: %d\n", menor);

    return 0;
}