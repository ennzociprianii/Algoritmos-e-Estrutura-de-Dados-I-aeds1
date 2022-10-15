#include <stdio.h>

void main(){
    double salario, emprestimo, x;

    printf("Digite o valor do salario do trabalhador: \n");
    scanf("%lf", &salario);
    printf("Digite o valor do emprestimo a ser contratado: \n");
    scanf("%lf", &emprestimo);

    x = (salario*20) / 100;

    if( emprestimo > x ) {
        printf("Emprestimo nao concedido.\n");
    } else {
        printf("Emprestimo concedido.\n");
    }

}