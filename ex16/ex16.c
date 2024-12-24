#include <stdio.h>

/*

16) [DESAFIO] Escreva um programa para calcular a redução do tempo de vida de um
fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele
já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule
quantos dias de vida um fumante perderá e exiba o total em dias.

*/

int main() {
    float cigarros_fumados = 0, anos_fumando = 0, total_cigarros = 0, minutos_perdidos = 0, dias_perdidos = 0, anos_perdidos = 0;

    printf("Quantos cigarros voce fuma por dia? \n");
    scanf("%f", &cigarros_fumados);

    printf("A quantos anos voce fuma? \n");
    scanf("%f", &anos_fumando);

    total_cigarros = cigarros_fumados * (anos_fumando * 365);
    minutos_perdidos = total_cigarros * 10;
    dias_perdidos = minutos_perdidos / (60 * 24);
    anos_perdidos = dias_perdidos / 365;
    printf("Voce perdeu %.0f dias da sua vida \n", dias_perdidos);
    

    if(anos_perdidos < 1) {
        printf("menos de um ano \n");
    } else {
        printf("(%.1f anos perdidos \n)", anos_perdidos);
    }
    
    system("pause");
}