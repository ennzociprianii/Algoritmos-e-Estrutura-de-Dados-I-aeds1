// Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente.
//Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número.


#include <stdio.h>


int main (){ 

    int a;
    scanf("%d", &a);

    switch (a) 
    {
        case 1: 
        printf("1 - Janeiro\n");
        break;

        case 2: 
        printf("2 - Fevereiro\n");
        break;

        case 3:
        printf("3 - Marco\n");
        break;

        case 4:
        printf("4 - Abril\n");
        break;

        case 5: 
        printf("5 - Maio\n");
        break;

        case 6:
        printf("6 - Junho\n");
        break;

        case 7:
        printf("7 - Julho\n");
        break;

        case 8:
        printf("8 - Agosto\n");
        break;

        case 9:
        printf("9 - Setembro\n");
        break;

        case 10:
        printf("10 - Outubro\n");
        break;

        case 11:
        printf("10 - Novembro\n");
        break;

        case 12:
        printf("12 - Dezembro\n");
        break;

        default:
        printf("Nao existe um mes com esse numero.\n");
    
    }




    return 0;
}