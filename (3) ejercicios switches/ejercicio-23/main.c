#include <stdio.h>

int main() {
    int grados, opcion;
    float conversion;
    printf("Ingresa grados celsius ");
    scanf("%d", &grados);
    printf("Ingresa 2 para convertir a kelvin o 1 para farenheit ");
    scanf("%d", &opcion);
    
    switch(opcion){
        case 1: conversion = (float) (9 * grados)/5 + 32; break;
        case 2: conversion = (float) grados + 273.15; break;
        default: printf("ingresa una opcion valida");
    }
    
    if (opcion == 1 || opcion == 2) {
        printf("tu resultado es %f", conversion);    
    }
    return 0;
}