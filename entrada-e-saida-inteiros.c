#include <stdio.h>

int main () {
    int a, b, c;

    scanf("%d\n%d\n%d", &a, &b, &c);

    if (a <= 10000 && a >= -10000) {
        if (b <= 99 && b >= 0) {
            if (c <= 999 && c >= 0) {
                printf("A = %d, B = %d, C = %d\n", a, b, c);
                printf("A =       %d, B =        %d, C =       %d\n", a, b, c);
                printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
                printf("A = %d       , B = %d       , C = %d       \n", a, b, c);

            } else {}
        }
    }






    return 0;
}