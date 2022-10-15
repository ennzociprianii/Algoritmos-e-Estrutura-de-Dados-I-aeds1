#include <stdio.h>
// apenas numeros inteiros

int equacao(int a, int b, int y){
    float soma;

    soma = ((float)((32 - y) * 2) / (a + b));

    printf("Resultado = %.1f", soma);

    return soma;
}



int main(){
    int a, b, y;     

    printf("Digite o valor de a, b e y:\n");
    scanf("%d%d%d", &a, &b, &y);

    equacao(a,b,y);
    
    return 0;
}   