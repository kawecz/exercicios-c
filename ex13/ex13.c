#include <stdio.h>

/*

13) Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o
seu novo salário, com 15% de aumento.

*/

int main() {
    float salario = 0, novo_salario = 0, aumento = 0;

    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    novo_salario = salario + (salario * 15 / 100);
    aumento = salario * 15 / 100;

    printf("Salario: R$%.2f \n", salario);
    printf("Aumento de 15%% (R$%.2f) \n", aumento);
    printf("Novo salario: R$%.2f \n", novo_salario);
    system("pause");
}