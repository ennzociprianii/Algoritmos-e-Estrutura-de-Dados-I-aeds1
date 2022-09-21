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