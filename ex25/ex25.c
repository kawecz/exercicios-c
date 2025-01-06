#include <stdio.h>

/*

25) [DESAFIO] Crie um programa que leia o tamanho de três segmentos de reta.
Analise seus comprimentos e diga se é possível formar um triângulo com essas
retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento
de cada lado deve ser menor que a soma dos outros dois.

*/

int main() {
    int v1, v2,v3;

    printf("Digite um valor: \n");
    scanf("%d", &v1);
    printf("Digite o segundo valor: \n");
    scanf("%d", &v2);
    printf("Digite o terceiro valor: \n");
    scanf("%d", &v3);

    if(v1 + v2 && v3 && v1 + v3 > v2 && v2 + v3 > v1) {
        printf("Os valores %d, %d e %d podem formar um triangulo. \n", v1, v2,v3);
    } else {
        printf("Os valores informados nao podem formar um triangulo. \n");
    }
    system("pause");
    return 0;
}