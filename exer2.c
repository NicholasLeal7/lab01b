//Nome: Nicholas dos Santos Leal   RA: 10409210
//Nome: Patrick Alves Golçalves    RA: 10409363
//Nome: Gustavo Ibara              RA: 10389067
#include <stdio.h>

float calcularMediaAproveitamento(float n1, float n2, float n3, float me) {
    return (n1 + n2 * 2 + n3 * 3 + me) / 7;
}

char obterConceito(float media) {
    if (media >= 9.0) {
        return 'A';
    } else if (media >= 7.5) {
        return 'B';
    } else if (media >= 6.0) {
        return 'C';
    } else if (media >= 4.0) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    float n1, n2, n3, me;
    printf("Digite as 3 notas do aluno (separadas por espaço): ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite a média dos exercícios realizados pelo aluno: ");
    scanf("%f", &me);

    float mediaAproveitamento = calcularMediaAproveitamento(n1, n2, n3, me);
    char conceito = obterConceito(mediaAproveitamento);

    printf("Média de Aproveitamento: %.2f\n", mediaAproveitamento);
    printf("Conceito: %c\n", conceito);

    return 0;
}
