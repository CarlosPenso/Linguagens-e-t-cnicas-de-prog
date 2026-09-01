#include <stdio.h>
#include <stdlib.h>

/* crie um programa que receba uma letra, e verifique se ela é vogal ou consoante, se ela for vogal, verifique se ela é 'a' ou 'o' caso seja mostre "aoba" 
caso seja 'i' ou mostre 'lá ele'. 
Caso contrario mostre '67'*/

int main(int argc, char *argv[]) {
	
	char letra;
	printf("Insira uma letra: ");
	scanf ("%c", &letra);
	
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
		if (letra =='a' || letra == 'o'){
			printf ("aoba");
		}
		if (letra =='i' || letra == 'u'){
			printf ("Lá ele");
		}
	}else {
		printf ("67");
	}
	
	switch (letra){
		case 'a':
		printf ("A de AMOR");
		break;
		
		case'b':
		printf ("B de BAIXINHO");
		break;
		
		case 'c':
		printf ("C de CORAÇÃO");
		break;
		
		case 'd':
		printf ("D de DEDINHO");
		break;
	}
	return 0;
}
