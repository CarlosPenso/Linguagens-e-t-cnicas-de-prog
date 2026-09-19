#include <stdio.h>
#include <stdlib.h>

float calcularINSS(float salario) {
    
    float inss;

    if (salario <= 1412.00) {
        inss = salario * 0.075;
    }
    else if (salario <= 2666.68) {
        inss = salario * 0.09;
    }
    else if (salario <= 4000.03) {
        inss = salario * 0.12;
    }
    else {
        inss = 4000.03 * 0.12;
        inss = inss + (salario - 4000.03) * 0.14;
    }

    return inss;
}

int main(int argc, char *argv[]) {
    
    float salario, desconto;

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    desconto = calcularINSS(salario);

    printf("Desconto do INSS: R$ %.2f\n", desconto);

    return 0;
}
