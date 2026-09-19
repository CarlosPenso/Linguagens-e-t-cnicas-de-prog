#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int segundos, horas, minutos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
