#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *arquivo;
    char Linha[100];
    int i;

    if ((arquivo = fopen (argv[1], "r")) == NULL) {
        printf("problemas na abertura do arquivo\n");
        exit(1);

    }

    i = 1;

    while (feof(arquivo) == 0)
    {
        fgets(Linha, 100, arquivo);
        i++;
    }
    printf("Quantidade de linhas: %d", i);
    fclose(arquivo);

    return 0;
}