#include <stdio.h>
#include <stdlib.h>

int compara (){
	if (a < b)return b;
	else return a;
}
int main (int argc, char *argv[]){
	int valores [10];
	int maior, menor, i;
	
	printf("vamos ler os valores: \n");
	//for (inicialização; verificação; incremento)
	for(i=1; i<10; i++){
		scanf("%d", &valores[i]);
	}
	printf ("\n");
	for( i=9; i>=0; i--){
		print ("|%d|", &valores [i]);
	}
	return 0;
}
