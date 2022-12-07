#include <stdio.h>

int main(){

    int matriz[3][3] = {1 , 2, 3, 4, 5, 6, 7, 8, 9};

    for (int m = 0; m < 3; m++) {
       for (int n = 0; n < 3; n++) {
            printf("%i ", matriz[m][n]);
       }
    }



    return 0;
}