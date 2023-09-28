#include <stdio.h>
#include <string.h>

int main(){
  char frase1[100];
  char frase2[100];
  char frase3[100];

  fgets(frase1, 100, stdin);
  fgets(frase2, 100, stdin);
  fgets(frase3, 100, stdin);

  printf("%s\n", frase1);

  return 0;
}