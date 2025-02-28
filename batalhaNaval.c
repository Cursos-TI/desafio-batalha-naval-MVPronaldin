#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    /*
    int tabuleiro [10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
        while (tabuleiro[3][6] < 3){
            tabuleiro[3][6]++;
            while (tabuleiro[3][7] < 3){
                tabuleiro [3][7]++;
                while (tabuleiro[3][8]< 3){
                    tabuleiro[3][8]++;
                };
            };
        };
        
        while (tabuleiro[5][3] < 3){
            tabuleiro[5][3]++;
            while (tabuleiro[6][3] < 3){
                tabuleiro [6][3]++;
                while (tabuleiro[7][3]< 3){
                    tabuleiro[7][3]++;
                };
            };
        };

    printf("TABULEIRO\n");
    printf("   A B C D E F G H I J\n");
    printf("01 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2], tabuleiro[0][3], tabuleiro[0][4], tabuleiro[0][5], tabuleiro[0][6], tabuleiro[0][7], tabuleiro[0][8], tabuleiro[0][9] );
    printf("02 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2], tabuleiro[1][3], tabuleiro[1][4], tabuleiro[1][5], tabuleiro[1][6], tabuleiro[1][7], tabuleiro[1][8], tabuleiro[1][9] );
    printf("03 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2], tabuleiro[2][3], tabuleiro[2][4], tabuleiro[2][5], tabuleiro[2][6], tabuleiro[2][7], tabuleiro[2][8], tabuleiro[2][9] );
    printf("04 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[3][0], tabuleiro[3][1], tabuleiro[3][2], tabuleiro[3][3], tabuleiro[3][4], tabuleiro[3][5], tabuleiro[3][6], tabuleiro[3][7], tabuleiro[3][8], tabuleiro[3][9] );
    printf("05 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[4][0], tabuleiro[4][1], tabuleiro[4][2], tabuleiro[4][3], tabuleiro[4][4], tabuleiro[4][5], tabuleiro[4][6], tabuleiro[4][7], tabuleiro[4][8], tabuleiro[4][9] );
    printf("06 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[5][0], tabuleiro[5][1], tabuleiro[5][2], tabuleiro[5][3], tabuleiro[5][4], tabuleiro[5][5], tabuleiro[5][6], tabuleiro[5][7], tabuleiro[5][8], tabuleiro[5][9] );
    printf("07 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[6][0], tabuleiro[6][1], tabuleiro[6][2], tabuleiro[6][3], tabuleiro[6][4], tabuleiro[6][5], tabuleiro[6][6], tabuleiro[6][7], tabuleiro[6][8], tabuleiro[6][9] );
    printf("08 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[7][0], tabuleiro[7][1], tabuleiro[7][2], tabuleiro[7][3], tabuleiro[7][4], tabuleiro[7][5], tabuleiro[7][6], tabuleiro[7][7], tabuleiro[7][8], tabuleiro[7][9] );
    printf("09 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[8][0], tabuleiro[8][1], tabuleiro[8][2], tabuleiro[8][3], tabuleiro[8][4], tabuleiro[8][5], tabuleiro[8][6], tabuleiro[8][7], tabuleiro[8][8], tabuleiro[8][9] );
    printf("10 %d %d %d %d %d %d %d %d %d %d \n", tabuleiro[9][0], tabuleiro[9][1], tabuleiro[9][2], tabuleiro[9][3], tabuleiro[9][4], tabuleiro[9][5], tabuleiro[9][6], tabuleiro[9][7], tabuleiro[9][8], tabuleiro[9][9] );
    */
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int matriz[LINHAS][COLUNAS];
    int preencher = 0;  
    
    //inicializando tabuleiro com 0
    for (int i = 0; i <= LINHAS - 1; i++){
        for(int j = 0; j <= COLUNAS - 1; j++){
            matriz[i][j] = preencher;
        };
    };
    //posicionando navio 1
    matriz [7][1] = 3;
    matriz [8][1] = 3;
    matriz [9][1] = 3;
    //posicionando navio 2
    matriz[1][5] = 3;
    matriz[1][6] = 3;
    matriz[1][7] = 3;
    //posicionando navio 3
    matriz[5][5] = 3;
    matriz[6][6] = 3;
    matriz[7][7] = 3;
    //posicionando navio 4
    matriz[3][6] = 3;
    matriz[4][7] = 3;
    
    //exibir o tabuleiro
    printf("   A B C D E F G H I J \n");
    for(int i = 0; i <= LINHAS - 1; i++){
        printf("%02d ", i + 1);
        for(int j = 0; j <= COLUNAS - 1; j++){
            printf("%d ", matriz[i][j]);
        };
        printf("\n");
    };
    
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    /*
    //posicionando a habilidade especial em matriz[0][3]
    matriz[0][3]=1;
    for (int i = 0; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS; j++){
            if (matriz[i][j] = 1) {
                matriz [i+1][j] +=1;
                matriz [i+1][j+1] +=1;
                matriz [i+1][j-1] +=1;
                matriz [i+2][j] +=1;
                matriz [i+2][j-1] +=1;
                matriz [i+2][j-2] +=1;
                matriz [i+2][j+1] +=1;
                matriz [i+2][j+2] +=1;
            }
            break;
        };break;
    };
    
    //exibir o tabuleiro
    printf("   A B C D E F G H I J \n");
    for(int i = 0; i <= LINHAS - 1; i++){
        printf("%02d ", i + 1);
        for(int j = 0; j <= COLUNAS - 1; j++){
            printf("%d ", matriz[i][j]);
        };
        printf("\n");
    };
    */
    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}


