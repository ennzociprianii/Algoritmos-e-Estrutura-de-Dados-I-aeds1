#include <stdio.h> 

int count = 0;

void imprime (int numero) {
    
    if (count < numero){
        for(int i = 0; i <= count; i++){
            printf("! ");    
            
        }
        printf("\n");
        count++;
        imprime(numero);
    }

    
}


int main(){
    int numero;
    printf("Informe o valor: ");
    scanf("%d", &numero);

    imprime(numero);

    return 0;
}