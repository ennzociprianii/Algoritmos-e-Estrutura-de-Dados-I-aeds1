#include <stdio.h>

int main() {

    int valor,valor1, cem , cinquenta , vinte , dez , cinco , dois , um;

    scanf("%d",&valor);

    valor1 = valor;
    cem = valor1 / 100;
    valor1 = valor1 - (cem *100);
    cinquenta = valor1 / 50;
    valor1 = valor1 - (cinquenta * 50);
    vinte = valor1 / 20;
    valor1 = valor - (vinte * 20);
    dez = valor1 /10;
    valor1 = valor1 -(dez * 10);
    cinco = valor1 / 5;
    valor1 = valor1 - (cinco * 5);
    dois = valor1 / 2;
    valor1 = valor1 - (dois * 2);

    printf("%d\n",valor);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",valor1);




    return 0;

}