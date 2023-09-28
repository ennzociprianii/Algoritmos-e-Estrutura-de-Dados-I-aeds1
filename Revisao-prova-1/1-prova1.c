#include <stdio.h>

int main(){

    int numero, potencia, i, resultado = 1;
  
    scanf("%d%d",&numero,&potencia);
    
    for(i=1; i<=potencia; i++)
    {
        resultado = resultado * numero;
      
        if(potencia == 0) 
        {
            resultado = 1;
        }
    }

    printf("%d", resultado);


    return 0;
}