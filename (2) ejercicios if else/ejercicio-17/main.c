#include <stdio.h>

int main() {
    int a, b, c;
    int menor, medio, mayor;
    
    printf("Escriba el primer numero ");
    scanf("%d", &a);
    printf("Escriba el segundo numero ");
    scanf("%d", &b);
    printf("Escriba el tercer numero ");
    scanf("%d", &c);
    
    if(a>b && a>c) {mayor = a;}
    else if(b>a && b>c) {mayor = b;}
    else if(c>b && c>a) {mayor = c;}

    if(a<b && a>c || a<c && a>b) {medio = a;}
    else if(b<a && b>c || b<c && b>a) {medio = b;}
    else if(c<b && c>a || c<a && c>b) {medio = c;}

    if(a<b && a<c) {menor = a;}
    else if(b<a && b<c) {menor = b;}
    else if(c<b && c<a) {menor = c;}
    
    printf("%d, %d, %d", menor, medio, mayor);
    return 0;
}