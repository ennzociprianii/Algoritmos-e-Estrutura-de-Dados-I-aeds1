// Faça um programa que leia o raio de uma circunferência, calcule e imprima o comprimento da circunferência.

#include <stdio.h>

int main () {

    double pi, raio, comprimento;
    pi = 3.1415;
    printf("Digite o tamanho do raio para medir o cumprimento:\n");
    scanf("%lf", &raio);

    comprimento = 2 * pi * raio;

    printf("O tamanho do cumprimento do raio eh: %lf", comprimento);


    return 0;
}