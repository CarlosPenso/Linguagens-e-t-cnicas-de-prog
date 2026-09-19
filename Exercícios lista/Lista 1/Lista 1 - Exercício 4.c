#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idadeDias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    idadeDias = idadeDias % 365;

    meses = idadeDias / 30;
    dias = idadeDias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
