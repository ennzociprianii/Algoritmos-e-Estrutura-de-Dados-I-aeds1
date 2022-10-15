#include <stdio.h> 

int main(){ 
    float numero;
    int val,cont;

    for(cont=1; cont <= 6; cont++){
        scanf("%f", &numero);
            if (numero >= 0){
                val = val+1;
            }
    }

    printf("%d valores positivos\n", val);

    return 0;
}