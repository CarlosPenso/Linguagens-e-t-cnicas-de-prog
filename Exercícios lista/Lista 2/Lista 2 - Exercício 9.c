#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int tempo, velocidade;
    float distancia, litros;

    printf("Digite o tempo da viagem: ");
    scanf("%d", &tempo);

    printf("Digite a velocidade media: ");
    scanf("%d", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("Litros gastos: %.3f\n", litros);

    return 0;
}
