#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    float v0, angulo, rad;
    float g = 9.8;
    float t = 0;
    float x, y;
    float vx, vy;

    printf("Digite a velocidade inicial: ");
    scanf("%f", &v0);

    printf("Digite o angulo: ");
    scanf("%f", &angulo);

    rad = angulo * (3.141592 / 180);

    vx = v0 * cos(rad);
    vy = v0 * sin(rad);

    y = 0;

    while (y >= 0) {
        
        x = vx * t;
        y = vy * t - (g * t * t) / 2;

        t = t + 0.01;
    }

    printf("Alcance: %.2f metros\n", x);
    printf("Tempo de voo: %.2f segundos\n", t);

    return 0;
}
