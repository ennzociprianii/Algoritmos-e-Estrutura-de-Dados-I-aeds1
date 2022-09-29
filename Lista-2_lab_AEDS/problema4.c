//Construa um programa que leia o percurso em quilômetros, o tipo do carro e informe o consumo estimado de combustível,
// sabendo-se que um carro tipo C faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro 



#include <stdio.h> 


int main () {
    
    double km, consumo_carro;
    char tipo_carro;
    printf("Qual o percuso em km?\n");
    scanf("%lf", &km);
    printf("Qual o tipo do carro?\n- reponda com letra maiuscula\nA - 8km/l\nB - 9km/l\nC - 12km/l\n");
    scanf("%s", &tipo_carro);

    if (tipo_carro == 'A') {
        consumo_carro = km/8;
        printf("O carro consumiu %.1lf litros de combustivel", consumo_carro);
    } else {
        if (tipo_carro == 'B') {
            consumo_carro = km/9;
            printf("O carro consumiu %.1lf litros de combustivel", consumo_carro);
        } else {
            if (tipo_carro == 'C') {
                consumo_carro = km/12;
                printf("O carro consumiu %.1lf litros de combustivel", consumo_carro);
            } else {
                printf("Confira os valores e tente novamente!\n");
            }
        }
    }

    return 0;
}