#include <stdio.h>

int main() {
    float notas[3], soma = 0, media;
    int i;

    printf("--- Media de Alunos ---\n");

    for (i = 0; i < 3; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 3;
    printf("\nA media da turma e: %.2f\n", media);

    if (media >= 7) {
        printf("Status: Turma Aprovada!\n");
    } else {
        printf("Status: Turma em Recuperacao.\n");
    }

    return 0;
}
