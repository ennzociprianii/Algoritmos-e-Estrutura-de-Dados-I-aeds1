// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>
    int main() {
        float a, b, c, d, e;

        printf("Digite o salario da pessoa: \n");
        scanf("%f", &a);

        printf("Digite a porcentagem que o salario vai aumentar: \n");
        scanf("%f", &b);

        c = a * b / 100;
        d = a + c;

        printf("O salario agora eh: %f\n", d);
        
        return 0;
    }