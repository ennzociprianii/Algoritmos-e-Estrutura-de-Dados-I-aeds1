#include <stdio.h>

int primos_entre_si(int x, int y){
    if (x % y == 0){
        return 0;
    } else {
        return 1;
    }
}


int main(){


    int a, b;

    printf("Digite dois numeros para verificar se eles sao primos entre si: \n");
    scanf("%d %d", &a, &b);

    printf("%d", primos_entre_si(a,b));



    return 0;
}