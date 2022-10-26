#include <stdio.h>

int eh_primo(int n){
    
    for (int i = 2; i < n; i++){
        if( n % i == 0) {
            return 0;
        } else {
            return 1;
        }
    }
}


int main(){

    int n;
    scanf("%d", &n);

    printf("%d", eh_primo(n));

    return 0;
}


