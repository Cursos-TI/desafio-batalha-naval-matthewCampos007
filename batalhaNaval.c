#include <stdio.h>


int main() {
    // Declarando a matriz 10x10 para números inteiros
    int matriz[10][10];
   printf("TABULEIRO BATALHA NAVAL\n");
    // Preenchendo a matriz
    for (int i = 0; i < 10; i++) { // Loop pelas linhas
        for (int j = 0; j < 10; j++) { // Loop pelas colunas
            matriz[i][j] = 0; 
        }
    }
            //posicionar os valores 3 na coluna h
    matriz[2][7] = 3;
    matriz[3][7] = 3;
    matriz[4][7] = 3;

      //posicionar os 3 valores 3 na coluna E, F,G
    matriz[1][4] = 3;
    matriz[1][5] = 3;
    matriz[1][6] = 3; 

    // Exibindo a matriz com cabeçalho de letras e números nas linhas
    printf("   "); // Espaço inicial para alinhar com os números das linhas
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra); // Imprime as letras das colunas (A a J)
    } 
    printf("\n");

    for (int i = 0; i < 10; i++) { // Loop para exibir as linhas
        printf("%2d ", i + 1); // Imprime os números das linhas (1 a 10)
        for (int j = 0; j < 10; j++) { // Loop para exibir as colunas
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
   }