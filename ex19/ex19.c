#include <stdio.h>

/*

19) Crie um algoritmo que leia o nome e as duas notas de um aluno, calcule a sua
média e mostre na tela. No final, analise a média e mostre se o aluno teve ou
não um bom aproveitamento (se ficou acima da média 7.0).

*/


int main() {
    float n1 = 0, n2 = 0, media = 0;

    printf("Digite a primeira nota \n");
    scanf("%f", &n1);

    printf("Digite a segunda nota \n");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("Aluno na media. \n");
    } else {
        printf("Aluno nao esta na media. \n");
    }

    system("pause");
}