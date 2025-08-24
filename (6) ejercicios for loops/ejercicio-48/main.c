#include <stdio.h>

int main() {
    int R, Rtotal = 0;
    for (int i = 0; i < 10; i++) {
        printf("ingresa tu resistencia numero %d ", i + 1);
        scanf("%d", &R);
        Rtotal += R;
    }
    printf("resistencia total es %d ohms" , Rtotal);
    return 0;
}