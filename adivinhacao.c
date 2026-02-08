#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, chute, tentativas = 0;
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1; // Gera numero entre 1 e 100

    printf("--- Jogo de Adivinhacao ---\n");
    printf("Tente adivinhar o numero entre 1 e 100!\n");

    do {
        printf("Seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute > numeroSecreto) {
            printf("O numero secreto e MENOR!\n");
        } else if (chute < numeroSecreto) {
            printf("O numero secreto e MAIOR!\n");
        }
    } while (chute != numeroSecreto);

    printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);

    return 0;
}
