#include <stdio.h>


/*

22) Escreva um programa que leia o ano de nascimento de um rapaz e mostre a sua
situação em relação ao alistamento militar.
- Se estiver antes dos 18 anos, mostre em quantos anos faltam para o
alistamento.
- Se já tiver depois dos 18 anos, mostre quantos anos já se passaram do
alistamento.

*/

int main() {
    int ano = 0, ano_nasc = 0, idade = 0, alistamento = 0;

    printf("Digite o ano atual \n");
    scanf("%d", &ano);

    printf("Digite sua data de nascimento \n");
    scanf("%d", &ano_nasc);

    idade = ano - ano_nasc;
   
    if(idade < 18) {
         alistamento = 18 - idade;
        printf("Voce nao tem idade para se alistar. \n");
        printf("Ainda faltam %d ano(s) \n", alistamento);
    } else if(idade == 18){
        printf("Voce tem 18 anos. Este e o ano do seu alistamento. \n");
    } else {
        alistamento = idade - 18;

        printf("Voce ja passou da idade para o alistamento. \n");
        printf("Ja se passaram %d ano(s). \n", alistamento);
    }
    system("pause");
}