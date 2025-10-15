#include <stdio.h>


// Nível Novato Jogo de Xadrez
int main(){

    // Torre - for

    printf("Movimento da Torre\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }


    printf("\n"); // Pula a Linha
    
    // Bispo - while

    printf("Movimento do Bispo\n");
    int j = 1;

    while(j <= 5){
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Rainha - do while
    printf("Movimento da Rainha\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
    
}