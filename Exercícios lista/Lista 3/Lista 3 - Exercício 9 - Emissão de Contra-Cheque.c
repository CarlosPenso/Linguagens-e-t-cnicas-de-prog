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
        inss = salario * 0.14;
    }

    return inss;
}

float calcularIRPF(float salarioBase) {
    
    float irpf;

    if (salarioBase <= 2259.20) {
        irpf = 0;
    }
    else if (salarioBase <= 2826.65) {
        irpf = (salarioBase * 0.075) - 169.44;
    }
    else if (salarioBase <= 3751.05) {
        irpf = (salarioBase * 0.15) - 381.44;
    }
    else if (salarioBase <= 4664.68) {
        irpf = (salarioBase * 0.225) - 662.77;
    }
    else {
        irpf = (salarioBase * 0.275) - 896.00;
    }

    return irpf;
}

int main(int argc, char *argv[]) {
    
    float valorHora, horasMes;
    float salarioBruto, inss, salarioBase, irpf, salarioLiquido;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horasMes);

    salarioBruto = valorHora * horasMes;

    inss = calcularINSS(salarioBruto);

    salarioBase = salarioBruto - inss;

    irpf = calcularIRPF(salarioBase);

    salarioLiquido = salarioBruto - inss - irpf;
    
    printf("\nRECIBO DE PAGAMENTO\n");
    
	printf("Salario Bruto: R$ %.2f\n", salarioBruto);
	printf("Desconto INSS: R$ %.2f\n", inss);
	printf("Desconto IRPF: R$ %.2f\n", irpf);
	
	printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
