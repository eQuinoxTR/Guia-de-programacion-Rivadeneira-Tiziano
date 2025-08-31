#include <stdio.h>

int main() {
    int plata, alcancia = 0;
    while (alcancia < 1000) {
        printf("ingresa plata en tu alcancia ");
        scanf("%d", &plata);
        if (plata > 0) alcancia += plata;
        else printf("no se admiten numeros negativos \n");
        printf("dinero en la alcancia %d\n", alcancia);
    }
    return 0;
}