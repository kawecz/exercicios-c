#include <stdio.h>

/*

11) Desenvolva uma lógica que leia os valores de A, B e C de uma equação do
segundo grau e mostre o valor de Delta.

*/

int main() {
    int a = 0, b = 0, c = 0, delta = 0;

    printf("Digite o valor de A: \n");
    scanf("%d", &a);

    printf("Digite o valor de B: \n");
    scanf("%d", &b);

    printf("Digite o valor de C: \n");
    scanf("%d", &c);

    delta = (b * b) - 4 * a * c ;

    printf("Valor de Delta: %d \n", delta);
    system("pause");
}