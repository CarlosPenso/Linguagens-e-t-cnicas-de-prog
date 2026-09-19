#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    
    float x1, y1, x2, y2, distancia;

    printf("Digite x1 e y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("DISTANCIA = %.4f\n", distancia);

    return 0;
}
