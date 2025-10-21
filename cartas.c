#include <stdio.h>

// Desafio: Movimentando o Cavalo no Xadrez
int main() {

    // TORRE – for
    printf("Movimento da Torre\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Pula a linha

    // BISPO – while
    printf("Movimento do Bispo\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // RAINHA – do while
    printf("Movimento da Rainha\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    printf("\n");

    // CAVALO – loops aninhados (for + do-while)
    printf("Movimento do Cavalo\n");

    int movimentos = 0; // controla o número de vezes que o cavalo fará o "L"

    // Loop externo (do-while): controla o movimento completo do cavalo
    do {
        // Loop interno (for): duas casas para baixo
        for (int i = 1; i <= 2; i++) {
            printf("Baixo\n");
        }

        // Após mover duas casas para baixo, move uma para a esquerda
        printf("Esquerda\n");

        movimentos++; // incrementa a quantidade de movimentos "em L" feitos
    } while (movimentos < 1); // executa o movimento uma vez

    return 0;
}