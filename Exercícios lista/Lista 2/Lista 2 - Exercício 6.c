#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int n;
	
	printf ("Entre com o valor de N");
	scanf ("%d", &n);
	
	printf("o numero %d, seu antecessor %d e seu sucessor %d", n, n-1, n+1);
	
	return 0;
}
