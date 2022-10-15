#include <stdio.h>
#define aprovado 7.0
#define reprovado 6.4



int main(){
    double p1, p2, p3, p4, media;
    
    scanf("%lf%lf%lf%lf", &p1, &p2, &p3, &p4);

    media = (p1 + p2 + p3 + p4) / 4.0;

    if (media >= aprovado){
        printf("Aprovado com um total de %lf\n", media);
    } else {
        if (media <= reprovado) {
            printf("Reprovado com um total de %lf\n", media);
        } else {
            printf("Precisa de fazer Recuperacao, ficou com %lf.\n", media);
        }
    }

    return 0;
}