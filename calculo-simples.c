/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o
valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e
 o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.*/

#include <stdio.h>

int main(){
    int codigo1, num1, codigo2, num2;
    float preco1, preco2;
    float valor1, valor2;
    double total;

    scanf("%d%d%f",&codigo1, &num1, &preco1);
    scanf("%d%d%f",&codigo2, &num2, &preco2);

    valor1 = num1 * preco1;
    valor2 = num2 * preco2;

    total = valor1 + valor2;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}