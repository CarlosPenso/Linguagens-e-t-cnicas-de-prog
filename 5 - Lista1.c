#include <stdio.h>

int main(){
	int idade;
	int dias, meses, anos;
	
	printf ("Digite a idade: ");
	scanf ("%d", &idade);
	
	anos = idade;
	meses = idade * 12;
	dias = meses * 30;
	
	printf ("A idade em anos: %d\n", anos);
	printf ("A idade em meses: %d\n", meses);
	printf ("A idade em dias: %d\n", dias);
	
	
	
	
	return 0;
}
