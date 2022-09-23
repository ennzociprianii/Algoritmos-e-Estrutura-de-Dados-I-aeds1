/*O seu professor gostaria que você fizesse um programa com as seguintes características:
Crie três variáveis para armazenar números inteiros;
Leia o primeiro número, que pode ser um valor na faixa de: -10000 ≤ A ≤ 10000;
Leia o segundo número, que pode ser um valor na faixa de: 0 ≤ B ≤ 99;
Leia o terceiro número, que pode ser um valor na faixa de: 0 ≤ C ≤ 999;
Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na primeira variável, uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na segunda variável, uma virgula, um espaço em branco, a letra C, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na terceira variável. Não esqueça de pular linha;
Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e justificado a direita;
Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e preenchido com zeros;
Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e justificado a esquerda. */

#include <stdio.h>

int main () {
    int a, b, c;

    scanf("%d\n%d\n%d", &a, &b, &c);

    if (a <= 10000 && a >= -10000) {
        if (b <= 99 && b >= 0) {
            if (c <= 999 && c >= 0) {
                printf("A = %d, B = %d, C = %d\n", a, b, c);
                printf("A = %10d, B = %10d, C = %10d\n", a, b, c);
                printf("A = %010d, B = %010d, C = %010d\n", a, b, c);
                printf("A = %-10d, B = %-10d, C = %-10d\n", a, b, c);

            } else {}
        }
    }

    return 0;
}