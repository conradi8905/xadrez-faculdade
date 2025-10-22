#include <stdio.h>

// Definindo constantes para o número de casas que cada peça vai se mover
#define TORRE_PASSOS 5
#define BISPO_VERTICAL 5
#define BISPO_HORIZONTAL 5
#define RAINHA_PASSOS 8
#define CAVALO_CIMA 2
#define CAVALO_DIREITA 1

// Função recursiva da Torre
void torre_recursiva(int passos)
{
    if (passos == 0) return; // condição de parada da recursão
    printf("Direita\n"); // imprime o movimento
    torre_recursiva(passos - 1); // chama a função diminuindo 1 passo
}

// Função recursiva do Bispo (vertical com loop horizontal interno)
void bispo_recursivo(int vertical_restante, int horizontal_por_passo)
{
    if (vertical_restante == 0) return; // condição de parada da recursão

    // loop interno horizontal
    for (int i = 0; i < horizontal_por_passo; i++)
    {
        printf("Cima Direita\n"); // imprime movimento do Bispo
    }

    bispo_recursivo(vertical_restante - 1, horizontal_por_passo); // chama recursivamente vertical
}

// Função recursiva da Rainha
void rainha_recursiva(int passos)
{
    if (passos == 0) return; // condição de parada
    printf("Esquerda\n"); // imprime movimento
    rainha_recursiva(passos - 1); // decrementa os passos
}

// Função para movimento do Cavalo com loops aninhados
void cavalo_movimento(int up_steps, int right_steps)
{
    // loop externo para o movimento vertical (Cima)
    for (int i = 0; i < up_steps; i++)
    {
        int j = 0; // contador interno para simular movimentos complexos ou condições
        // loop interno (while) controlando passos e fluxo
        while (j < 1)
        {
            printf("Cima\n"); // imprime cada passo para cima
            j++;
        }
    }

    // Depois que terminou de subir, move para a direita
    int k = 0;
    while (k < right_steps)
    {
        printf("Direita\n"); // imprime movimento para a direita
        k++;
    }
}

int main()
{
    // Movimento da Torre
    printf("Movimento da Torre\n");
    torre_recursiva(TORRE_PASSOS); // chama função recursiva
    printf("\n"); // separa a peça

    // Movimento do Bispo
    printf("Movimento do Bispo\n");
    bispo_recursivo(BISPO_VERTICAL, BISPO_HORIZONTAL); // chama função recursiva com loops internos
    printf("\n"); // separa a peça

    // Movimento da Rainha
    printf("Movimento da Rainha\n");
    rainha_recursiva(RAINHA_PASSOS); // chama função recursiva
    printf("\n"); // separa a peça

    // Movimento do Cavalo
    printf("Movimento do Cavalo\n");
    cavalo_movimento(CAVALO_CIMA, CAVALO_DIREITA); // chama função com loops aninhados

    return 0;
}
