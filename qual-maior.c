#include <stdio.h>

int main(){
    double a,b,c;

    scanf("%lf%lf%lf", &a, &b, &c);

    if(a > b && a > c) {
        printf("%.1lf eh maior.\n", a);
    } else {
        if(b > a && b > c) {
            printf("%.1lf eh maior.\n", b);
        } else {
            if (c > a && c > b){
                printf("%.1lf eh maior.\n", c);
            } else {
                printf("Ue\n");
            }
        }
    }


    return 0;
}