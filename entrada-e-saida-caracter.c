/* O seu professor gostaria de fazer um programa com as seguintes características:
Crie 3 variáveis para armazenar um único carácter;
Leia um valor carácter para a primeira variável;
Leia um valor carácter para a segunda variável;
Leia um valor carácter para a terceira variável;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco,
o carácter armazenado na primeira variável lida no passo 2, uma virgula, um espaço
em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco,
o carácter armazenado na segunda variável lida no passo 3, a letra C, um espaço em
branco, o sinal de igual, um espaço em branco, o carácter armazenado na terceira variável lida no passo 4. Não esqueça de pular linha;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o
carácter armazenado na primeira variável lida no passo 3, uma virgula, um espaço em branco,
a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado
na segunda variável lida no passo 4, a letra C, um espaço em branco, o sinal de igual,
um espaço em branco, o carácter armazenado na terceira variável lida no passo 2. Não esqueça de pular linha;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o carácter
armazenado na primeira variável lida no passo 4, uma virgula, um espaço em branco, a letra B,
um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na segunda
variável lida no passo 2, a letra C, um espaço em branco, o sinal de igual, um espaço em branco,
o carácter armazenado na terceira variável lida no passo 3. Não esqueça de pular linha.*/


#include <stdio.h>

int main () {
    char a, b, c;

    scanf("%c\n%c\n%c", &a, &b, &c);

    printf("A = %c, B = %c, C = %c\n", a, b, c);
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    printf("A = %c, B = %c, C = %c\n", c, a, b);



    return 0;
}