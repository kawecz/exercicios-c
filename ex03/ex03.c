#include <stdio.h>

/* 

3) Crie um programa que leia o nome e o sal�rio de um funcion�rio, mostrando no
final uma mensagem.
Ex:
Nome do Funcion�rio: Maria do Carmo
Sal�rio: 1850,45
O funcion�rio Maria do Carmo tem um sal�rio de R$1850,45 em Junho.

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
