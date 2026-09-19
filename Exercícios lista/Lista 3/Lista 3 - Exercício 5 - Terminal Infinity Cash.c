#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int valor;
    int notas100, notas50, notas10, notas5, notas2, notas1;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor = valor % 100;

    notas50 = valor / 50;
    valor = valor % 50;

    notas10 = valor / 10;
    valor = valor % 10;

    notas5 = valor / 5;
    valor = valor % 5;

    notas2 = valor / 2;
    valor = valor % 2;

    notas1 = valor / 1;

    printf("\nResumo do saque:\n");
    printf("Notas de R$ 100: %d\n", notas100);
    printf("Notas de R$ 50:  %d\n", notas50);
    printf("Notas de R$ 10:  %d\n", notas10);
    printf("Notas de R$ 5:   %d\n", notas5);
    printf("Notas de R$ 2:   %d\n", notas2);
    printf("Notas de R$ 1:   %d\n", notas1);

    return 0;
}
