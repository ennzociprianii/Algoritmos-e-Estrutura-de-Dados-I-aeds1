#include <stdio.h>


int main(){

  int N;
  printf("Digite um numero inteiro de 0 a 10 para fazer a contagem: \n");
  scanf("%d", &N);

  switch (N)
  {
  case 10:
    printf("10 ");
  
  case 9:
    printf("9 ");

  case 8:
    printf("8 ");  
  
  case 7:
    printf("7 ");

  case 6:
    printf("6 ");

  case 5:
    printf("5 ");

  case 4:
    printf("4 ");

  case 3:
    printf("3 ");

  case 2:
    printf("2 ");

  case 1:
    printf("1 ");     

  case 0:
    printf("0 ");     
    break;         
  }

  return 0;
} 