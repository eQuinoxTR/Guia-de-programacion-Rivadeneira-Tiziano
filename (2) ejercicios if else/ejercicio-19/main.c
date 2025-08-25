#include <stdio.h>

int main () {
  int tramos, tipo_de_vuelo, peso, monto = 0;
  printf("ingresa el tipo de vuelo [1 - pasajero] [2 - cabotaje] ");
  scanf("%d", &tipo_de_vuelo);
  printf("ingresa la cantidad de tramos ");
  scanf("%d", &tramos);
  printf("ingresa el peso del equipaje o carga (kg) ");
  scanf("%d", &peso);

  if (tipo_de_vuelo == 1) {
    monto = tramos * 50;
    if (peso > 15) tramos += peso * 5;
    monto = monto * 1.3;
  } else if (tipo_de_vuelo == 2) {
    monto = tramos * 350;
    if (peso >= 1000) monto += peso / 1000 * 350;
    monto = monto * 1.3;
  }

  printf("El monto es igual a %d pesos", monto);
  return 0;
}

