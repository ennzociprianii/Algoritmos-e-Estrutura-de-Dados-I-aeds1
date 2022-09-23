/* Elabore um programa que leia um caractere e depois imprima tal caractere como um valor inteiro.
Execute o programa com diferentes caracteres (incluindo maiúsculos) e relate o que aconteceu. */


#include <stdio.h>
    int main () {
        char caractere;

        printf("Digite um caractere: \n");
        scanf("%c", &caractere);
        printf("%d", caractere);

        return 0;
    }