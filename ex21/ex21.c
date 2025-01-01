#include <stdio.h>

/*

21) Faça um algoritmo que leia um determinado ano e mostre se ele é ou não
BISSEXTO.

*/

int main() {
    int ano = 0;

    printf("Digite um ano: \n");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("Ano bissexto\n.");
    } else {
        printf("Este ano nao e bissexto.\n");
    }
    system("pause");
}