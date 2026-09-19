#include <stdio.h>

int main() {
    int valor1, valor2, valor3, valor4;
    float soma, media, produto;

    printf("Digite os quatro valores: ");
    scanf("%d %d %d %d", &valor1, &valor2, &valor3, &valor4);

    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4;
    produto = valor1 * valor2 * valor3 * valor4;

    printf("A soma dos valores: %.2f\n", soma);
    printf("A media dos valores: %.2f\n", media);
    printf("O produto dos valores: %.2f\n", produto);

    return 0;
}
