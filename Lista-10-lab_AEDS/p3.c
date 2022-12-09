#include <stdio.h>

int resultado = 0;

int potencia(int x, int y){
    if(y == 0){
        return 1;
    }
    return (x * potencia(x, y-1));
}

int main(){
    int numero1, numero2;
    
    printf("Digite a base da potencia: ");
    scanf("%d", &numero1);
    printf("Digite a expoente da potencia: ");
    scanf("%d", &numero2);
    printf("%d",potencia(numero1, numero2));

    return 0;
}
