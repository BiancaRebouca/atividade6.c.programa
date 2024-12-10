//O algoritmo apresentado na Figura 6.6, baseado em soma simples, não
//detecta erros de digitação causados por permutação de dígitos. Uma versão
//mais robusta pode ser obtida usando soma ponderada, em que cada dígito é
//multiplicado por sua posição. Implemente essa nova versão do algoritmo. 

#include <stdio.h>
int main(){

    int numero;
    int resto;
    int soma=0;
    int mult=1;

    printf("Numero: ");
    scanf("%d", &numero);

    while(numero>0){
    resto=numero%10;
    numero=numero/10;
    resto =  resto * mult;
    soma=soma+resto;
    mult=mult+1;
    }
    soma= soma % 10;

    printf("Digito verificador correspondente: %d \n", soma);
}
