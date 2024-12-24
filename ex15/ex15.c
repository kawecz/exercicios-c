#include <stdio.h>

/*

15) Crie um programa que leia o número de dias trabalhados em um mês e mostre o
salário de um funcionário, sabendo que ele trabalha 8 horas por dia e ganha R$25
por hora trabalhada.

 */

int main() {
    float dias_trabalhados = 0, sal = 0;

    printf("Digite quantos dias voce trabalhou no mes: \n");
    scanf("%f", &dias_trabalhados);

    sal = dias_trabalhados * 8 * 25;

    printf("Salario do mes: R$%.2f\n", sal);
}