#include <stdio.h>

/*
4) Desenvolva um algoritmo que leia dois números inteiros e mostre o somatório
entre eles.
Ex:
Digite um valor: 8
Digite outro valor: 5
A soma entre 8 e 5 é igual a 13.
*/

int main () {
	int n1,n2;
	int soma = 0;
	
	printf("Digite um valor: \n");
	scanf("%d", &n1);
	
	printf("Digite outro valor: \n");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("A soma entre %d e %d igual a %d\n", n1,n2,soma);
	
	system("pause");
}
