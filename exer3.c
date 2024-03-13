//Nome: Nicholas dos Santos Leal   RA: 10409210
//Nome: Patrick Alves Golçalves    RA: 10409363
//Nome: Gustavo Ibara              RA: 10389067
#include <stdio.h>

int main() {
    int numeroMaximo;

    do {
        printf("Digite um número ímpar: ");
        scanf("%d", &numeroMaximo);

        if (numeroMaximo % 2 == 0) {
            printf("Número inválido. Por favor, insira um número ímpar.\n");
        }
    } while (numeroMaximo % 2 == 0);

    for (int linha = 1; linha <= numeroMaximo; linha += 2) {
        for (int espaco = 1; espaco < linha; espaco += 2) {
            printf("  ");
        }
        for (int numero = linha; numero <= numeroMaximo; numero++) {
            printf("%d ", numero);
        }
        printf("\n");
    }

    return 0;
}
