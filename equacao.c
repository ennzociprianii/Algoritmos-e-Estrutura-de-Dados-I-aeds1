#include <stdio.h>
#include "moduloequacao.h"
// apenas numeros inteiros


int main(){
    int a, b, y;     

    printf("Digite o valor de a, b e y:\n");
    scanf("%d%d%d", &a, &b, &y);

    equacao(a,b,y);
    
    return 0;
}   