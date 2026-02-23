#include <stdio.h>

int main() {

    // ==============================
    // MOVIMENTO DA TORRE (FOR)
    // ==============================
    // A Torre se move 5 casas para a direita.
    // Utilizando a estrutura de repetição FOR.

    int casasTorre = 5;
    int i;

    printf("=== Movimento da Torre ===\n");

    for(i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }


    // ==============================
    // MOVIMENTO DO BISPO (WHILE)
    // ==============================
    // O Bispo se move 5 casas na diagonal
    // (Cima e Direita).
    // Utilizando a estrutura WHILE.

    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");

    while(contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    // ==============================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // ==============================
    // A Rainha se move 8 casas para a esquerda.
    // Utilizando a estrutura DO-WHILE.

    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha <= casasRainha);


    return 0;
}
