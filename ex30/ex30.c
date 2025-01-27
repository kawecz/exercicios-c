#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(NULL));

    int numero = (rand() % 3) + 1; 
    int escolha;
    char resultado[20]; 


    printf("Jogo de Pedra, Papel e Tesoura!\n");
    printf("[1] Pedra\n");
    printf("[2] Papel\n");
    printf("[3] Tesoura\n");
    printf("Escolha sua jogada: ");
    scanf("%d", &escolha);

    
    if (escolha < 1 || escolha > 3) {
        printf("Escolha invalida! Tente novamente.\n");
        return 1;
    }


    if (escolha == numero) {
        strcpy(resultado, "EMPATE!");
    } else if ((escolha == 1 && numero == 3) || 
               (escolha == 2 && numero == 1) || 
               (escolha == 3 && numero == 2)) {
        strcpy(resultado, "VOCE VENCEU!");
    } else {
        strcpy(resultado, "VOCE PERDEU!");
    }


    char *opcoes[] = {"", "Pedra", "Papel", "Tesoura"};
    printf("Voce escolheu %s.\n", opcoes[escolha]);
    printf("A maquina escolheu %s.\n", opcoes[numero]);
    printf("%s\n", resultado);

    return 0;
    system("pause");
}
