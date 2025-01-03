#include <stdio.h>

/*

24) Faça um algoritmo que pergunte a distância que um passageiro deseja
percorrer em Km. Calcule o preço da passagem, cobrando R$0.50 por Km para
viagens até 200Km e R$0.45 para viagens mais longas.

*/

int main() {
    float km = 0, preco_passagem = 0;

    printf("Qual a distancia que voce ira percorrer? \n");
    scanf("%f", &km);

    if(km <= 200) {
        preco_passagem = km * 0.50;
        printf("percorrendo uma distancia de %.0fkm, com um custo de R$0.50 por km, voce pagara R$%.2f", km, preco_passagem);
    } else {
        preco_passagem = km * 0.45;
        printf("percorrendo uma distancia de %.0fkm, com um custo de R$0.45 por km, voce pagara R$%.2f", km, preco_passagem);
    }
}