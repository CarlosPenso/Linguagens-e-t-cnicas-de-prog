#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, volume;
    float pi = 3.14159;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("VOLUME = %.3f\n", volume);
    
	return 0;
}
