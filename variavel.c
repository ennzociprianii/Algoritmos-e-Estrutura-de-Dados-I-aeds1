#include <stdio.h>

int inverso(int a, int b){
    int guardar;

    guardar = a;
    a = b;
    b = guardar;

    printf("A = %d e B = %d", a, b);

    return a, b;
}


int main(){
    int varA, varB, aux;
    
    printf("Digite o valor de A e B: \n");
    scanf("%d %d", &varA, &varB);

    inverso(varA, varB);

    return 0;
}

