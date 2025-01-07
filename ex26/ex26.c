#include <stdio.h>

/*

26) Escreva um algoritmo que leia dois números inteiros e compare-os, mostrando
na tela uma das mensagens abaixo:
- O primeiro valor é o maior
- O segundo valor é o maior
- Não existe valor maior, os dois são iguais

*/

int main() {
    int n1 = 0, n2 = 0;

    printf("Digite um numero: \n");
    scanf("%d", &n1);

    printf("Digite outro valor: \n");
    scanf("%d", &n2);

    if( n1 > n2) {
        printf("O primeiro valor e maior. \n");
    } else if(n1 < n2) {
        printf("O segundo valor e maior. \n");
    } else {
        printf("Nao existe valor maior, os dois sao iguais. \n");
    }

    system("pause");
    return 0;
}