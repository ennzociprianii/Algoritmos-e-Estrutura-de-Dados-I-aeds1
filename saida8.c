/* O seu professor de programação gostaria que você fizesse um programa com as seguintes características:
Crie duas variáveis reais de dupla precisão;
Atribua a primeira o valor 234.345 e a segunda o valor 45.698;
Imprima as duas variáveis com seis casas decimais;
Imprima as duas variáveis sem nenhuma casa decimal;
Imprima as duas variáveis com uma casa decimal;
Imprima as duas variáveis com duas casas decimais;
Imprima as duas variáveis com três casas decimais;
Imprima as duas variáveis com notação cientifica com 'e';
Imprima as duas variáveis com notação cientifica com 'E';
Imprima as duas variáveis com a representação mais curta, com 'e' ou 'E' ou sem;
Imprima as duas variáveis com a representação mais curta, com 'e' ou 'E' ou sem;
Para imprimir, separe os valores com um espaço em branco, um traço (-) e um espaço em branco. */

#include <stdio.h>

int main(){
    double A, B;
    A = 234.345;
    B = 45.698;

    printf("%.6lf - %.6lf\n", A, B);
    printf("%.lf - %.lf\n", A, B);
    printf("%.1lf - %.1lf\n", A, B);
    printf("%.2lf - %.2lf\n", A, B);
    printf("%.3lf - %.3lf\n", A, B);
    printf("%e - %e\n", A, B);
    printf("%E - %E\n", A, B);
    printf("%.3lf - %.3lf\n", A, B);
    printf("%.3lf - %.3lf\n", A, B);


    return 0;
}