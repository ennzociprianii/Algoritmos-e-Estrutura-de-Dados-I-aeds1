#include <stdio.h>

int eh_primo(int n){
  printf("Digite um numero para verificar se ele eh primo ou nao: \n");
  scanf("%d", &n);

  if (n % 2 == 0) {
    return 0;
  } else {
    return 1;
  }

  return n;
}

int mdc(int x, int y){
  int resto;

  while(y != 0) {
    resto = x % y;
    x = y;
    y = resto;
  }
  return x;

}


int main(){
  int x;
  eh_primo(x);

  return 0;
}