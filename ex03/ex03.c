#include <stdio.h>

/* 

3) Crie um programa que leia o nome e o salário de um funcionário, mostrando no
final uma mensagem.
Ex:
Nome do Funcionário: Maria do Carmo
Salário: 1850,45
O funcionário Maria do Carmo tem um salário de R$1850,45 em Junho.

*/

int main() {
	char nome[50];
	float sal = 0;
	
	printf("Nome do funcionario: \n");
	scanf("%s", &nome);
	
	printf("Salario: \n");
	scanf("%f", &sal);
	
	printf("Nome do funcionario: %s. \n", nome);
	printf("Salario: %.3f. \n", sal);
	
	system("pause");
}
