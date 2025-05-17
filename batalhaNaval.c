#include <stdio.h>

#define LINHAS 10 // Definindo o tamanho da linha
#define COLUNAS 10 // Definindo o tamanho da coluna

 // Impressão do tabuleiro
 void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("Tabuleiro de BATALHA NAVAL!:\n");
    for (int i = 0; i < LINHAS; i++) 
    {
        for (int j = 0; j < COLUNAS; j++) 
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

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

    // Posicionamento dos navios no tabuleiro
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[4][3 + i] = 3; // Define a posição do navio horizontal
        tabuleiro[5 + i][7] = 3; // Define a posição do navio vertical]
        tabuleiro[0 + i][0 + i] = 3; // Define a posição do navio diagonal
        tabuleiro[0 + i][9 - i] = 3; // Define a posição do navio diagonal
    }

    // Criação dos poderes especiais

    // Criação do poder do cone
    int cone[3][5];
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 5; j++) 
            {
                if (j >= 2 - i && j <= 2 + i) 
                {
                    cone[i][j] = 5; // Define a posição do cone
                } 
                else 
                {
                    cone[i][j] = 0; // Define a posição vazia
                }
            }
        printf("\n");
        }

    // Criação do poder da cruz
    int cruz[3][5];
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 5; j++) 
            {
                if (i == 1 || j == 2) 
                {
                    cruz[i][j] = 5; // Define a posição do cruz
                } 
                else 
                {
                    cruz[i][j] = 0; // Define a posição vazia
                }    
            }
        printf("\n");
        }

    // Criação do poder do octaedro
    int octaedro[3][5];
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 5; j++) 
            {
                if ((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 2 || j == 3) || (i == 2 && j == 2)))
                {
                    octaedro[i][j] = 5; // Define a posição do octaedro
                } 
                else 
                {
                    octaedro[i][j] = 0; // Define a posição vazia
                }    
            }
        printf("\n");
        }
  
    

    // Exibição do tabuleiro com os navios
    exibirTabuleiro(tabuleiro); // Chama a função para exibir o tabuleiro
   
    printf("\n");

    return 0;
}