#include <stdio.h>

int main() {
    int opcao;
    float valor, resultado;

    printf("--- Conversor de Unidades ---\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Metros para Quilometros\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &valor);
        resultado = (valor * 9/5) + 32;
        printf("%.2f Celsius e igual a %.2f Fahrenheit\n", valor, resultado);
    } else if (opcao == 2) {
        printf("Digite a distancia em metros: ");
        scanf("%f", &valor);
        resultado = valor / 1000;
        printf("%.2f metros e igual a %.2f quilometros\n", valor, resultado);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
