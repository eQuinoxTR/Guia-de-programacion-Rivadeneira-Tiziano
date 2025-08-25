#include <stdio.h>

int main() {
    int precioDeZapatilla;
    printf("ingresa el precio tus zapatillas ");
    scanf("%d", &precioDeZapatilla);
    float descuento = precioDeZapatilla * 0.85; 
    printf("El precio con el descuento es %f", descuento);
    return 0;
}