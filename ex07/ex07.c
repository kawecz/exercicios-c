#include <stdio.h>

/*
7) Crie um algoritmo que leia um número real e mostre na tela o seu dobro e a
sua terça parte.
Ex:
Digite um número: 3.5
O dobro de 3.5 é 7.0
A terça parte de 3.5 é 1.16666

*/

int main() {
    float num = 0, dobro = 0, terca = 0;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    dobro = num * 2;
    terca = num * 3;

    printf("O dobro de %.2f e %.2f \n", num, dobro);
    printf("A terca parte de %.2f e %.2f \n", num, terca);
    system("pause");
}