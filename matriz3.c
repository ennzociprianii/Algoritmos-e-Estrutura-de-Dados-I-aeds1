#include <stdio.h>

int main(){
    double M[12][12];
    int c, i, j;
    char op[5];
    double soma = 0.0;

    scanf("%d", &c);
    scanf("%s", &op);

    for (i=0; i < 12; i++)
    for(j=0; j < 12; j++)

        scanf("%lf", &M[i][j]);

    for( i =0; i < 12; i++)
        soma += M[i][c];

    if(op[0] == 'M') soma = soma/12.0;

    printf("%.1çf\n", soma);    


    return 0;
}