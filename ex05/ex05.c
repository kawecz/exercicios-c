#include <stdio.h>

/*
5) Fa�a um programa que leia as duas notas de um aluno em uma mat�ria e mostre
na tela a sua m�dia na disciplina.
Ex:
Nota 1: 4.5
Nota 2: 8.5
A m�dia entre 4.5 e 8.5 � igual a 6.5
*/

int main (){
	float n1 = 0, n2 = 0, media = 0;
	
	printf("Primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Segunda nota: \n");
	scanf("%f", &n2);
	
	media = (n1 + n2) / 2;
	
	printf(" A media entre %.1f e %.1f e igual a %.1f \n",n1, n2,media);
	
	system("pause");
}
