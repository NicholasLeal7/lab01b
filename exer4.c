//Nome: Nicholas dos Santos Leal   RA: 10409210
//Nome: Patrick Alves Golçalves    RA: 10409363
//Nome: Gustavo Ibara              RA: 10389067
#include <stdio.h>
#include <string.h>

int main() {
    char nomeUm[100], nomeDois[100];

    printf("Digite o primeiro nome: ");
    fgets(nomeUm, sizeof(nomeUm), stdin);
    nomeUm[strcspn(nomeUm, "\n")] = 0; 

    printf("Digite o segundo nome: ");
    fgets(nomeDois, sizeof(nomeDois), stdin);
    nomeDois[strcspn(nomeDois, "\n")] = 0;  

    if (strcmp(nomeUm, nomeDois) < 0) {
        printf("%s\n%s\n", nomeUm, nomeDois);
    } else {
        printf("%s\n%s\n", nomeDois, nomeUm);
    }

    return 0;
}
