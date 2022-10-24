#include <stdio.h>


int main(){

    int a, b, aux, contador;
    scanf("%d %d", &a, &b);

    for(contador = 0; contador < b; contador++){
        aux = a * a;
        aux = aux * contador;
    }

    printf("%d", aux);

   
    
    
    


    return 0;
}