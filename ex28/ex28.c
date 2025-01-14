#include <stdio.h>

/*

28) Faça um programa que leia a largura e o comprimento de um terreno
retangular, calculando e mostrando a sua área em m². O programa também
devemostrar a classificação desse terreno, de acordo com a lista abaixo:
- Abaixo de 100m² = TERRENO POPULAR
- Entre 100m² e 500m² = TERRENO MASTER
- Acima de 500m² = TERRENO VIP

*/

int main() {
    int largura, comprimento, area;

    printf("Digite a largura do terreno: \n");
    scanf("%d", &largura);
    printf("Digite o comprimento do terreno: \n");
    scanf("%d", &comprimento);

    area = largura * comprimento;
    
    if(area < 100) {
        printf("TERRENO POPULAR.\n");
    } else if( area >= 100 && area < 500) {
        printf("TERRENO MASTER. \n");
    } else {
        printf("TERRENO VIP.\n");
    }
}