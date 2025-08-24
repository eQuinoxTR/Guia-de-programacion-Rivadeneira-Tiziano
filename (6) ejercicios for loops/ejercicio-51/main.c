#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, sum = 0, cant = 0;
    bool trigger;

    for (int i = 1; i <= 8; i++) {
        printf("cual es tu numero? \npresionar 14 para empezar a calcular la suma de los numeros anteriores y la cantidad de posteriores \n");
        scanf("%d", &n);
        if (n == 14) trigger = true;
        if (trigger == true) cant++;
        else sum+=n;
    }

    printf("tu suma es %d \nla cantidad de numeros posteriores desde que aprestaste 14 es %d \n", sum, cant);
    
    return 0;
}