#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int segundos = time(0);
    srand (segundos);

    int n1 = rand ();

    int number = n1 % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000; 

    int acertou = 0;

    int nivel;
    printf("Qual eh adificuldade que voce deseja jogar?\n");
    printf("(1) Facil (2) Medio (3) Dificil\n\n");
    printf("Escolha a dificuldade: ");
    scanf("%d", &nivel);

    int numerotentativas;
    
    switch (nivel) {
     case 1: numerotentativas = 20;
        break;
     case 2: numerotentativas = 10;
        break;       
     default: numerotentativas = 5;
        break;
    }
    
    printf("Seu numero de tentativas eh: %d\n", numerotentativas);

    for (int i = 0; i < numerotentativas; i++) {

        printf("Tentativa %d\n", tentativas);
        
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);

        printf("Seu chute foi: %d\n", chute);

        if (chute < 0) {
            printf("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        acertou = chute == number;
        int maior = chute > number;

        if (acertou) {
            break;
        }
        else if (maior) {
            printf("Seu chute foi maior que o numero secreto!!\n");
        }
        else {
            printf("Seu chute foi menor que o numero secreto!!\n");
        }
    tentativas++;   
    
    double pontosperdidos = abs(chute - number) / (double) 2;
    pontos = pontos - pontosperdidos;
    }

    printf("Fim do jogo !!\n");

    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabens! Voce acertou!\n");
        printf("Voce fez %.2f pontos. Ate a proxima!\n\n", pontos);
    } else {

        printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");

        printf("\nVoce perdeu! Tente novamente!\n\n");
    }
}