#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
    FILE *listacompra;

    char *nome[20];
    float quantidade;
    float valor;
    float total = 0.0;

    if ((listacompra = fopen (argv[1], "r")) == NULL ) {
        printf("Arquivo nao aberto.\n");
        exit(1);
    } 

    while (!feof (listacompra)) {
        fscanf(listacompra, "%s %f %f", nome, &quantidade, &valor);
        total = total + (quantidade * valor);
    }
    printf("Total: %.1f\n", total);
    fclose(listacompra);
}