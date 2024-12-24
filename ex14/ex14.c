#include <stdio.h>

/*

14) A locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva
um programa que pergunte a quantidade de Km percorridos por um carro alugado e a
quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar,
sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.

*/

int main() {
    float km_percorridos = 0, quantidade_dias_alugado = 0, km_valor = 0, dia_valor = 0, valor_final = 0;

    printf("Quantidade de km rodados: \n");
    scanf("%f", &km_percorridos);

    printf("Quantidade de dias alugado: \n");
    scanf("%f", &quantidade_dias_alugado);

    km_valor = km_percorridos * 0.20;
    dia_valor = quantidade_dias_alugado * 90;
    valor_final = km_valor + dia_valor;

    printf("Km rodados: %.0f \n", km_percorridos);
    printf("Dias alugados: %.0f \n", quantidade_dias_alugado);
    printf("Valor a pagar: R$%.2f \n", valor_final);
    system("pause");
}