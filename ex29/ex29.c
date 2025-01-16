#include <stdio.h>

/*

29) Desenvolva um programa que leia o nome de um funcionário, seu salário,
quantos anos ele trabalha na empresa e mostre seu novo salário, reajustado de
acordo com a tabela a seguir:
- Até 3 anos de empresa: aumento de 3%
- entre 3 e 10 anos: aumento de 12.5%
- 10 anos ou mais: aumento de 20%

*/

int main() {
    char nome[50];
    float salario, aumento, novo_salario;
    int anos_de_trabalho;

    printf("Digite o nome do funcionario: \n");
    scanf("%s", nome);

    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);

    printf("Digite a quantidade de anos na empresa: \n");
    scanf("%d", &anos_de_trabalho);

    printf("Nome do funcionario: %s\n", nome);
    printf("Anos de servico: %d\n", anos_de_trabalho);

    if(anos_de_trabalho <= 3) {
        aumento = 3;
    } else if(anos_de_trabalho > 3 && anos_de_trabalho <= 10) {
        aumento = 12.5;
    } else {
        aumento = 20;
    }
    novo_salario = salario + (salario * aumento / 100);
    printf("Novo salario do funcionario: %.2f\n", novo_salario);
    system("pause");
}