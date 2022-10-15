#include <stdio.h> 

int main(){

    int numero, par;

    for (numero = 1; numero < 101; numero++){
        if (numero % 2 == 0) {
            printf("%d\n", numero);
        }
    }

    return 0;
}