#include <stdio.h>

/*

12) Crie um programa que leia o preço de um produto, calcule e mostre o seu
PREÇO PROMOCIONAL, com 5% de desconto.

*/

int main() {
    float produto = 0, desconto = 0;

    printf("Digite o valor do produto: \n");
    scanf("%f", &produto);

    desconto = produto - (produto * 5 / 100);
    printf("Com um desconto de 5%% no valor do produto de R$%.2f, ficara com um valor de R$%.2f \n", produto, desconto);
    system("pause");
}