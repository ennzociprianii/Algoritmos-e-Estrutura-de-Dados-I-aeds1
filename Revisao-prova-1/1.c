#include <stdio.h>

int main(){

  int potencia, base, expoente, contador;

  contador = 0;
  potencia = 1; 

  printf("Digite o valor da base: \n");
  scanf("%d", &base); //2
  printf("Digite o valor do expoente: \n");
  scanf("%d", &expoente); //5

  while (contador != expoente) {
    potencia = potencia * base;
    contador = contador + 1;
  }
  
  printf("o valor da exponenciacao eh %d.\n", potencia);

  return 0;
}