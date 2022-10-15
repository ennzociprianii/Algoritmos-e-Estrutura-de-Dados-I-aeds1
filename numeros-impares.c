#include <stdio.h>

int main() {

  int cont,numero;

    scanf("%d",&numero);

    if(numero%2==0)
        numero=numero-1;
        
    for(cont=1;cont<=numero;cont+=2)
        printf("%d\n",cont);

    return 0;
}