/* O seu professor gostaria de fazer um programa com as seguintes características:
Leia um número no formato: XXXXX.YYY;
Imprima o número na forma invertida: YYY.XXXXX. */

#include <stdio.h>


int main (){
    int DD, MM, AA; 
    scanf("%02d %02d %02d", &DD, &MM, &AA);
    printf("%02d/%02d/%02d\n", MM, DD, AA);
    printf("%02d/%02d/%02d\n", AA, MM, DD);
    printf("%02d-%02d-%02d\n", DD, MM, AA);


    return 0;
}