#include <stdio.h>

int main(){
    double horas, velocidade;

    scanf("%lf%lf", &horas, &velocidade);

    double km = (horas * velocidade)/12;

    printf("%.3lf\n", km);

    return 0;
}