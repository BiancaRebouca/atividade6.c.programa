//3 Um número natural é denominado triangular se é igual à soma dos n
//primeiros números naturais consecutivos, a partir de 1. Por exemplo, 1, 3,
//6, 10, 15, ... são triangulares. Dado um natural n≥1, informe se ele é ou
//não triangular.
#include <stdio.h>

int main() {
    int numero, soma = 0, triangular = 1;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    while ( numero > soma ) {
        soma = soma + triangular;  
        triangular++;        
    }
    if(numero==0){
        printf("%d nao e um numero triangular.\n", numero);
    } 
    else if (soma == numero) {
        printf("%d e um numero triangular.\n", numero);
    } 
    else {
        printf("%d nao e um numero triangular.\n", numero);
    }
}
