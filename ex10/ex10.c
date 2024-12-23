
#include <stdio.h>

/*

10) Faça um algoritmo que leia a largura e altura de uma parede, calcule e
mostre a área a ser pintada e a quantidade de tinta necessária para o serviço,
sabendo que cada litro de tinta pinta uma área de 2 metros quadrados.

*/

int main() {
    float largura = 0, altura = 0, area = 0, tinta = 0;

    printf("Digite a altura: \n");
    scanf("%f", &altura);
    
    printf("Digite a largura: \n");
    scanf("%f", &largura);

    area = altura * largura;
    tinta = area / 2;

    printf("Area a ser pintada: %.2fm \n", area);
    printf("Quantidade de tinta necessaria: %.2fL \n", tinta);
    system("pause");
}