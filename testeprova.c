#include <stdio.h>

void menor_maior(int *end_var1, int *end_var2){
    if (&end_var1 > &end_var2) {
        
    }
}



int main (){

    int x, y, resultado;
    scanf("%d %d", &x, &y);

    if ( x > y) {
        resultado = x - y;
    } else {
        if ( x < y) {
            resultado = y - x;
        } else {
            resultado = x;
        }
    }

    printf("O MDC de %d e %d eh %d", x, y, resultado);



    return 0;
}

