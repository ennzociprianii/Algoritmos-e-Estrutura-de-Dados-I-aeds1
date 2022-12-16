#include <stdio.h>
#include <stdlib.h>

void concatenar ( FILE *base, FILE *copiado) {
    char leitor [1000];

    while (fgets (leitor, sizeof leitor, copiado) != NULL) {
        fputs (leitor, base);
    }
}


int main(int argc, char *argv[]){

    FILE *arquivo1;
    FILE *arquivo2;
    FILE *arquivo3;


    char nome1 [300], nome2 [300];

    arquivo1 = fopen (nome1, "r");

    if ((arquivo1 = fopen (argv[1], "r")) == NULL ) {
        printf("Nao foi possivel abrir\n");
    }

    if ((arquivo2 = fopen (argv[2], "r")) == NULL ) {
        printf("Nao foi possivel abrir\n");
    }

    arquivo3 = fopen ("concatenado.txt", "a");

    if (arquivo3 == NULL ){
        printf("Nao foi possivel abrir\n");
    }    

    concatenar (arquivo2, arquivo1);
    concatenar (arquivo3, arquivo2);

    fclose (arquivo1);
    fclose (arquivo2);
    fclose (arquivo3);

    return 0;
}