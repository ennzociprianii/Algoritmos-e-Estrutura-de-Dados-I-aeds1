#include <stdio.h> 

int main(){

    int numero = 1;
    int contador, contador2 = 0;

    for (contador = 1; contador <= 1000; contador++){
        if (contador % 7 == 0){
            contador2++; 
        }
    }   

    printf("%d", contador2);



    return 0;
}