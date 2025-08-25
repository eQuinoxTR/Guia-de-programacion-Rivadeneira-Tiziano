#include <stdio.h>

int main() {
    int monto, descuento;
    printf("ingresa tu monto de la compra ");
    scanf("%d", &monto);
    if (monto < 150) {
        descuento = monto - (monto * 0.045);
    } else if (monto < 550) {
        descuento = monto - (monto * 0.08);
    } else if (monto > 550) {
        descuento = monto - (monto * 0.105);
    }
    printf("precio final con descuento: %d pesos", descuento);
    return 0;
}