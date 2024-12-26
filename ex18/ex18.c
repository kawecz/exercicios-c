#include <stdio.h>

/*

18) Faça um programa que leia o ano de nascimento de uma pessoa, calcule a idade
dela e depois mostre se ela pode ou não votar.

*/

int main() {
    int idade = 0, ano_nasc = 0;

    printf("Digite o ano que voce nasceu: \n");
    scanf("%d", &ano_nasc);

    idade = 2024 - ano_nasc;

    if(idade >= 16 && idade < 18){
        printf("voce tem %d anos\n", idade);
        printf("voto opcional. \n");
    } else if(idade >= 18 && idade <= 70 ) {
        printf("voce tem %d anos\n", idade);
        printf("voto obrigatorio. \n");
    } else if(idade > 70) {
        printf("voce tem %d anos\n", idade);
        printf("voto opcional. \n");
    }

    system("pause");
}