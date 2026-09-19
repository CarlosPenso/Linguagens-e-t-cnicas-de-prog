#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    float graus, radianos;
    float pi = 3.141592;

    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * pi / 180;

    printf("RADIANOS = %.6f\n", radianos);

    return 0;
}
