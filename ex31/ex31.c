#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//definindo os valores.
#define pedra 1
#define papel 2
#define tesoura 3

/*
  31) [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)
*/

int main() {
  srand(time(NULL));
  int computador = (rand() % 3) +1;
  int jogador;

  printf("JokenPo game!\n");
  printf("+--------------+\n");

  printf("Escolha sua jogada:\n");
  printf("1-Pedra\n 2-Papel \n 3-Tesoura\n");
  scanf("%d", &jogador);

  

    if (jogador == computador) {
      printf("Empate!\n");
  } else if ((jogador == pedra  && computador == tesoura) ||
           (jogador == papel && computador == pedra) ||
           (jogador == tesoura && computador == papel)) {
      printf("Venceu!\n");
  }   else {
      printf("Perdeu!\n");
    }
    printf("Jogador: %d\n", jogador);
    printf("Computador: %d\n", computador);

  return 0;
}
