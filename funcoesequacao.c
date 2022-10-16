#include <stdio.h>

int equacao(int a, int b, int y){
    float soma;

    soma = ((float)((32 - y) * 2) / (a + b));

    printf("Resultado = %.1f", soma);

    return soma;
}