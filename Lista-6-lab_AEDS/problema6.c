#include <stdio.h>

int eh_primo(int n){
    if (n % n == 1 && n % 1 == 1) {
        return 1;
    } else {
        return 0;
    }
}


int main(){

    int n;
    scanf("%d", &n);

    printf("%d", eh_primo(n));


    return 0;
}


