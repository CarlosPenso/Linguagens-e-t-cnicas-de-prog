#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float base, altura, area;
	
	printf("Insira um valor para BASE\n");
	scanf ("%f",&base);
	printf("insira outro valor para a ALTURA\n");
	scanf ("%f",&altura);
	area = (base*altura)/2;
	
	printf("A Area do Triangulo = %0.2f", area);
	return 0;
}
