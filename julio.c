#include<stdio.h>
#include<stdlib.h>

int eh_primo(int n);
int mdc(int x, int y);
int mmc(int x, int y);

int main (){

  if (int eh_primo (int n)==0){
      printf("os numeros nao primos");
  }else{
      printf("mdc: %d\n mmc: %d\n", mdc, mmc);6
  }

  return 0;
}

int eh_primo(int num, int i, int resultado){
  int num, i, resultado = 0;
  
  printf("Digite um número: ");
  scanf("%d", &num);
  
  for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        resultado++;
        break;
      }
  }
  
  if (resultado == 0){
      printf("%d é um número primo\n", num);
  }else{
      printf("%d não é um número primo\n", num);
  }
}