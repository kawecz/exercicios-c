#include <stdio.h>

/*

23) Numa promoção exclusiva para o Dia da Mulher, uma loja quer dar descontos
para todos, mas especialmente para mulheres. Faça um programa que leia nome,
sexo e o valor das compras do cliente e calcule o preço com desconto. Sabendo
que:
- Homens ganham 5% de desconto
- Mulheres ganham 13% de desconto

*/

int main () {
    char nome[50];
    int sexo = 0;
    float valor_compra, novo_valor, desconto;

    printf("Digite seu nome: \n");
    scanf("%49s", nome);

    printf("Digite seu sexo:\n");
    printf("1[Homem]\n");
    printf("2[Mulher]\n");
    scanf("%d", &sexo);
    
    if(sexo == 1 || sexo == 2) {
        printf("Digite o valor da sua compra: \n");
        scanf("%f", &valor_compra);

        if(sexo == 1 ) {
        desconto = 5.0;
        printf("sexo: Masculino \n");

    } else {
        desconto = 13.0;
        printf("sexo: Feminino\n");
    } 
    novo_valor = valor_compra - (valor_compra * desconto / 100);

    printf("Nome: %s \n", nome);
    printf("Aplicando um desconto de R$%.0f no valor de R$%.2f, o novo preco sera de R$%.2f \n", desconto, valor_compra, novo_valor);
    } else {
    printf("Valor invalido.\n");
    }
}