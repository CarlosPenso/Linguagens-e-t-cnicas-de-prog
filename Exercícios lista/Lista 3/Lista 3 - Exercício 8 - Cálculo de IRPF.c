#include <stdio.h>
#include <stdlib.h>

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
    
    float salarioBase, imposto;

    printf("Digite o salario base: R$ ");
    scanf("%f", &salarioBase);

    imposto = calcularIRPF(salarioBase);

    printf("Imposto de Renda: R$ %.2f\n", imposto);

    return 0;
}
