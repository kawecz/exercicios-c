#include <stdio.h>

/*

27) Crie um programa que leia duas notas de um aluno e calcule a sua média,
mostrando uma mensagem no final, de acordo com a média atingida:
- Média até 4.9: REPROVADO
- Média entre 5.0 e 6.9: RECUPERAÇÃO
- Média 7.0 ou superior: APROVADO

*/

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("sua media foi de: %.1f \n", media);

    if(media <= 4.9) {
        printf("REPROVADO!\n");
    } else if(media >= 5 && media <= 6.9) {
        printf("RECUPERACAO!\n"); 
    } else {
        printf("APROVADO!\n");
    }

    system("pause");
    return 0;
}