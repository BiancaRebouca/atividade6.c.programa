
//Numa fábrica há dois alarmes: um deles dispara a cada x horas e o outro, a
//cada y horas. Codifique um programa em C que, dados os valores de x e y,
//informe qual o tempo mínimo necessário para que os dois alarmes disparem
//simultaneamente. Considere que x e y são números inteiros positivos.
#include <stdio.h>
int main(){

    int x;
    int y;
    int tempo=1;

    printf("tempo x:");
    scanf("%d",&x);

    printf("tempo y:");
    scanf("%d",&y);

    while(tempo%x!=0||tempo%y!=0){
        tempo % x!=0;
        tempo % y!=0;
        tempo++;
    }
    printf("em %d ambos sao iguais", tempo);

}
