#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  char num[5];
  char digito1[2], digito2[2], digito3[2], digito4[2];
  char invertido[5];
  
  printf("escribi un numero de 4 digitos ");
  scanf("%s", &num);
  
  // pongo el pointer de cada letra como segundo parametro
  strncpy(digito1, &num[0], 1);
  strncpy(digito2, &num[1], 1);
  strncpy(digito3, &num[2], 1);
  strncpy(digito4, &num[3], 1);
  
  // para decirle a la memoria donde termina el str
  digito1[1] = '\0';
  digito2[1] = '\0';
  digito3[1] = '\0';
  digito4[1] = '\0';
  
  invertido[0] = digito4[0];
  invertido[1] = digito3[0];
  invertido[2] = digito2[0];
  invertido[3] = digito1[0];
  invertido[4] = '\0';
  
  // lo podria hacer un entero, pero si pongo 1000, me daria 1, cuando enrealidad deberia ser 0001
  printf("%s", invertido);
  return 0;
}