#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int celsius;
	float fahrenheit;
	
	printf ("Qual a temperatura em Celsius: ");
	scanf ("%d",&celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32;
	
	printf ("A temperatura em Fahrenheit: %.2f\n", fahrenheit);
	
	
	return 0;
}
