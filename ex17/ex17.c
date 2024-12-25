#include <stdio.h>

/*

17) Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse
80Km/h, exiba uma mensagem dizendo que o usuário foi multado. Nesse caso, exiba
o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.

*/

int main() {
    int velocidade = 0, multa = 0;

    printf("Digite a velocidade do carro: \n");
    scanf("%d", &velocidade);

    if(velocidade > 80) {
        multa = (velocidade - 80) * 5;
        printf("Voce ultrapassou o limite de velocidade! \n");
        printf("Multa a pagar: R$%d\n", multa);
    } else {
        printf("Velocidade adequada.\n");
    } 

    system("pause");
}