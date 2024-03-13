//Nome: Nicholas dos Santos Leal   RA: 10409210
//Nome: Patrick Alves Golçalves    RA: 10409363
//Nome: Gustavo Ibara              RA: 10389067
#include <stdio.h>

#define MAX 100

void lerMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void multiplicarLinha(int matriz[MAX][MAX], int linhas, int colunas, int linha, int numero) {
    for (int j = 0; j < colunas; j++) {
        matriz[linha][j] *= numero;
    }
}

void multiplicarColuna(int matriz[MAX][MAX], int linhas, int colunas, int coluna, int numero) {
    for (int i = 0; i < linhas; i++) {
        matriz[i][coluna] *= numero;
    }
}

void imprimirMatriz(int matriz[MAX][MAX], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[MAX][MAX];
    int linhas, colunas, linha, coluna, numero;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    lerMatriz(matriz, linhas, colunas);

    printf("Digite a linha a ser multiplicada: ");
    scanf("%d", &linha);
    linha--;  // Ajusta o índice para começar de 0

    printf("Digite o número pelo qual a linha será multiplicada: ");
    scanf("%d", &numero);

    multiplicarLinha(matriz, linhas, colunas, linha, numero);

    printf("Digite a coluna a ser multiplicada: ");
    scanf("%d", &coluna);
    coluna--;  // Ajusta o índice para começar de 0

    printf("Digite o número pelo qual a coluna será multiplicada: ");
    scanf("%d", &numero);

    multiplicarColuna(matriz, linhas, colunas, coluna, numero);

    printf("Matriz após as multiplicações:\n");
    imprimirMatriz(matriz, linhas, colunas);

    return 0;
}
