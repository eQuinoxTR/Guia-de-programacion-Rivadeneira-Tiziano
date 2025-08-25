#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  char num[6];
  char digito1[2], digito2[2], digito3[2], digito4[2], digito5[2];
  char invertido[6];
  
  printf("escribi un numero de 4 digitos ");
  scanf("%s", &num);
  
  strncpy(digito1, &num[0], 1);
  strncpy(digito2, &num[1], 1);
  strncpy(digito3, &num[2], 1);
  strncpy(digito4, &num[3], 1);
  strncpy(digito5, &num[4], 1);
  
  digito1[1] = '\0';
  digito2[1] = '\0';
  digito3[1] = '\0';
  digito4[1] = '\0';
  digito5[1] = '\0';
  
  invertido[0] = digito5[0];
  invertido[1] = digito4[0];
  invertido[2] = digito3[0];
  invertido[3] = digito2[0];
  invertido[4] = digito1[0];
  invertido[5] = '\0';
  
  if (strcmp(num, invertido) == 0) {
     printf("el numero ingresado es capicuo \n");
     printf(" %s vs %s", num, invertido);
  } else {
      printf("el numero ingresado no es capicuo");
      printf("%s vs %s", num, invertido);
  }
  return 0;
}


