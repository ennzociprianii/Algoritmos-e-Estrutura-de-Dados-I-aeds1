// Escreva um programa que leia três números e calcule a média. 


#include <stdio.h>
    int main() {
        int a, b, c, d;

        printf("Digite 3 numeros para calcular a media entre eles:\n");
        scanf ("%d\n%d\n%d", &a, &b, &c);

        d = (a + b + c) / 3;

        printf("A media entre eles eh: %d\n", d);
        
        return 0;
    }