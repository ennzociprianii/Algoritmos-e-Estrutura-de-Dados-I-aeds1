#include <stdio.h>

int main(void){
    const int bimestreAnuais = 4;
    const int numeroDeAluns = 4;

    float notasAlunos[numeroDeAluns][bimestreAnuais] = {0};
    float mediaAlunos[numeroDeAluns][bimestreAnuais] = {0};

    float media = 0;

    printf("Insira as 4 notas do aluno 1: \n");

    for (int aluno = 0; aluno < numeroDeAluns; aluno++){
        for ( int notas = 0; notas < bimestreAnuais; notas++){
            scanf("%f", &notasAlunos[aluno][notas]);
            media = media + notasAlunos[aluno][notas]
        }

        mediaAlunos[aluno] = media / bimestreAnuais;
        media = 0;
        printf("Insira as 4 notas do aluno %i", aluno + 2);
    }




    return 0;
}