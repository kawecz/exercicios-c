#include <stdio.h>

/*Fa�a um programa que leia o nome de uma pessoa e mostre uma mensagem de boas vindas
para ela: 
Ex:
Qual � o seu nome? Jo�o da Silva
Ol� Jo�o da Silva, � um prazer te conhecer!
*/

int main() {
    char nome[50];
    
    printf("Qual e o seu nome? \n");
    scanf("%s",&nome);
    
    printf("Ola %s e um prazer em te conhecer", nome);
    
    system("pause");
}
