#include <stdio.h>

/*

9) Faça um algoritmo que leia quanto dinheiro uma pessoa tem na carteira (em R$)
e mostre quantos dólares ela pode comprar. Considere US$1,00 = R$3,45.

*/

int main(){
    float reais = 0, dol = 0;

    printf("Digite quanto reais voce tem: \n");
    scanf("%f", &reais);

    dol = reais / 3.45;

    printf("Voce tem R$%.2f, convertendo para dolares, voce tem U$%.2f", reais, dol);    
    system("pause");
}