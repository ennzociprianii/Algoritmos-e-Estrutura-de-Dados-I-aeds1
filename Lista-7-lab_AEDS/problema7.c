#include <stdio.h>

int main(){

    int colunas, linhas, lin, col;

    printf("Digite a linha que a torre esta: \n");
    scanf("%d", &linhas);
    printf("Digite a coluna que a torre esta: \n");
    scanf("%d", &colunas);

    printf("      1  2  3  4  5  6  7  8  \n");
    printf("    ------------------------\n");

    for (lin = 1; lin <= 8; lin++) {
        printf(" %d | ", lin);
        for (int col = 1; col <= 8; col++){
            if (lin == linhas || col == colunas){
                printf(" x ");
            } else {
                printf(" - ");
            }
        }
        printf("\n");
    }    
    return 0;
}