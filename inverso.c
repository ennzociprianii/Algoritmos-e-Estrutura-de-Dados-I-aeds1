/* Implemente um programa que leia dois valores do tipo float. Use um único comando de leitura para isso.
Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos. */

#include <stdio.h>
    int main() {
        float numero1, numero2;

        scanf ("%f%f", &numero1, &numero2);
        printf("%f\t%f\n", numero2, numero1);
        
        return 0;
    
    }