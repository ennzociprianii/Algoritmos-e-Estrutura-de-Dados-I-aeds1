#include <stdio.h>

int main(){
    float preco, desconto, total;

    printf("Digite o preco do produto: \n");
    scanf("%f", &preco);

    desconto = (preco * 0.1);
    total =  preco - desconto;

    printf("O valor atualizado eh de %.2f", total);


    return 0;
}