#include <stdio.h>

#define LINHAS 10 // Definindo o tamanho da linha
#define COLUNAS 10 // Definindo o tamanho da coluna

int main () {

    // Criação da matriz 10x10
    int tabuleiro[LINHAS][COLUNAS]; // Matriz 10x10
    
    // Inicialização da matriz com zeros
    printf("Tabuleiro sem navios:\n");
    for (int i = 0; i < LINHAS; i++) 
    {
        for (int j = 0; j < COLUNAS; j++) 
        {
            tabuleiro[i][j] = 0; // Inicializa cada posição com zero
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da posição
        }
        printf("\n");
    }

    printf("\n\n");

    // Posicionamento do navio no tabuleiro
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[3][3 + i] = 3; // Define a posição do navio horizontal
        tabuleiro[5 + i][7] = 3; // Define a posição do navio vertical]
        tabuleiro[0 + i][0 + i] = 3; // Define a posição do navio diagonal
        tabuleiro[0 + i][9 - i] = 3; // Define a posição do navio diagonal
    }
    
    // Impressão do novo tabuleiro
    printf("Tabuleiro com navio:\n");
    for (int i = 0; i < LINHAS; i++) 
    {
        for (int j = 0; j < COLUNAS; j++) 
        {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da posição
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}