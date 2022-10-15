#include <stdio.h>


float conta_imc (float p, float a){
    float massa;

    massa = p / (a*a);

    return massa;
}


int main(){
    float peso, altura, imc;

    printf("Digite o peso da pessoa: \n");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa: \n");
    scanf("%f", &altura);

    imc = conta_imc(peso, altura);

    printf("O IMC dessa pessoa eh %.2f\n", imc);


    return 0;
}