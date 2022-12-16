#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    int i;
    FILE *arq; 
    int d;

    arq = fopen ("conversao.txt", "w");

    printf("Digite o numero: ");
    scanf("%d", &a);

    while (a > 8) {
        for (1 = 31; 1 >= 0; i--) {
            b = a >> 1;

            if (b % 1) {
                d = 1;
                fprintf(arq, "d", d);
            } else {
                d = 0;
                fprintf(arq, "%d", d);
            }
        }
        
        printf("\n");
        char a = '\n';
        fwrite(&a, sizeof(char), 1, arq);

        printf("Digite outro numero: ");
        scanf("%d", &a);
    }

    fclose (arq);
    return 0;
}

