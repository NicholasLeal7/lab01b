//Nome: Nicholas dos Santos Leal   RA: 10409210
//Nome: Patrick Alves Golçalves    RA: 10409363
//Nome: Gustavo Ibara              RA: 10389067
#include <stdio.h>

int encontrarLinhaMenor(int matriz[][100], int dimensao) {
    int menor = matriz[0][0];
    int linhaDoMenorNumero = 1;

    for (int i = 0; i < dimensao; i++) {
        int menorLinha = matriz[i][0];

        for (int j = 0; j < dimensao; j++) {
            if (matriz[i][j] < menorLinha) {
                menorLinha = matriz[i][j];
            }
        }

        if (menorLinha < menor) {
            menor = menorLinha;
            linhaDoMenorNumero = i + 1;
        }
    }

    return linhaDoMenorNumero;
}

int main() {
    int dimensao;
    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &dimensao);

    int matriz[100][100];

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < dimensao; i++) {
        printf("Digite os valores para a %dª linha:\n", i + 1);
        for (int j = 0; j < dimensao; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int linhaMenor = encontrarLinhaMenor(matriz, dimensao);
    printf("A linha que contem o menor valor e: %d\n", linhaMenor);

    return 0;
}
