#include <stdio.h>

/*

20) Desenvolva um programa que leia um número inteiro e mostre se ele é PAR ou
ÍMPAR.

*/

int main() {
    int num = 0;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if( num % 2 == 0) {
        printf("Numero par\n");
    } else {
        printf("Numero impar\n");
    }
}