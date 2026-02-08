#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    printf("--- Jogo: Pedra, Papel e Tesoura ---\n");
    printf("Escolha uma opcao:\n");
    printf("0. Pedra\n");
    printf("1. Papel\n");
    printf("2. Tesoura\n");
    printf("Sua escolha: ");
    scanf("%d", &escolhaJogador);

    // O computador escolhe um número entre 0 e 2
    escolhaComputador = rand() % 3;

    if (escolhaJogador < 0 || escolhaJogador > 2) {
        printf("Opcao invalida! Tente novamente.\n");
    } else {
        printf("\nVoce escolheu: ");
        if (escolhaJogador == 0) printf("Pedra\n");
        else if (escolhaJogador == 1) printf("Papel\n");
        else printf("Tesoura\n");

        printf("O computador escolheu: ");
        if (escolhaComputador == 0) printf("Pedra\n");
        else if (escolhaComputador == 1) printf("Papel\n");
        else printf("Tesoura\n");

        // Lógica para decidir o vencedor
        if (escolhaJogador == escolhaComputador) {
            printf("\n--- EMPATE! ---\n");
        } else if ((escolhaJogador == 0 && escolhaComputador == 2) ||
                   (escolhaJogador == 1 && escolhaComputador == 0) ||
                   (escolhaJogador == 2 && escolhaComputador == 1)) {
            printf("\n--- VOCE GANHOU! 🏆 ---\n");
        } else {
            printf("\n--- VOCE PERDEU! ❌ ---\n");
        }
    }

    return 0;
}
