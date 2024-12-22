#include <stdio.h>

/*
6) Faça um programa que leia um número inteiro e mostre o seu antecessor e seu
sucessor.
Ex:
Digite um número: 9
O antecessor de 9 é 8
O sucessor de 9 é 10
 */

int main() {
    int num = 0, ant = 0, suc = 0;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("O antecessor de %d e %d \n",num, ant);
    printf("O sucessor de %d e %d \n",num, suc );
	system("pause");
}
