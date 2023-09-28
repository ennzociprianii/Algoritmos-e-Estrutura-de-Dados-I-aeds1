#include <stdio.h>

int main(){

    int x, y, z, num1, num2, num3, comparador;

    scanf("%d %d %d", &x, &y, &z);

    num1 = x;
    num2 = y;
    num3 = z;
    if (num1 < num2)
    {
        comparador = num1;
        num1 = num2;
        num2 = comparador;
    }
    if (num2 < num3)
    {
        comparador = num2;
        num2 = num3;
        num3 = comparador;
    }
    if (num1 < num2)
    {
        comparador = num1;
        num1 = num2;
        num2 = comparador;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",num3,num2,num1,x,y,z);

    return 0;
}