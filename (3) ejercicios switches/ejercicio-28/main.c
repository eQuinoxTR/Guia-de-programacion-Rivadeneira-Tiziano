#include <stdio.h>

int main() {
    float n1, n2, resultado;
    char op;
    
    printf("Ingresa la operación (+ , -, *, /):");
    op = getchar(); 
    
    printf("Ingresa el primer número: ");
    scanf("%f", &n1);
    printf("Ingresa el primer número: ");
    scanf("%f", &n2);
    
    
    switch (op){
        
        case '+': resultado = n1 + n2; break;
        case '-': resultado = n1 - n2; break;
        case '*': resultado = n1 * n2; break;
        case '/': resultado = n1 / n2; break;
        default: printf("Error Matemático\n");
    }
    printf("resultado %3.2f", resultado);
    
    return 0;
}