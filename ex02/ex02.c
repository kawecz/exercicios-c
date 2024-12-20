#include <stdio.h>

/*Faça um programa que leia o nome de uma pessoa e mostre uma mensagem de boas vindas
para ela: 
Ex:
Qual é o seu nome? João da Silva
Olá João da Silva, é um prazer te conhecer!
*/

int main() {
    char nome[50];
    
    printf("Qual e o seu nome? \n");
    scanf("%s",&nome);
    
    printf("Ola %s e um prazer em te conhecer", nome);
    
    system("pause");
}
