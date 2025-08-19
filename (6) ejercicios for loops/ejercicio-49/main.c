#include <stdio.h>

int main() {
    int minNum = 0, ultimoNum;
    for (int i = 1; i<=5; i++){
        printf("ingresa tu numero ");
        scanf("%d", &ultimoNum);
        if (i == 1 || ultimoNum < minNum) minNum = ultimoNum;
    }
    printf("el numero mas chico es %d ", minNum);
    return 0;
}