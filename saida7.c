#include <stdio.h>
 
int main() {
    int valor = 97;
    while (valor <= 122) {
        printf("%i e %c\n", valor, (char) valor);
        valor++;
    }

    return 0;
}