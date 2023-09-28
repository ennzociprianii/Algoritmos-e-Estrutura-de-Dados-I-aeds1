#include <stdio.h>

int main(){

  int a, b, resultado = 0;
  scanf("%d%d", &a, &b);

  for (int i = 1; i <= b; i++) {
    resultado = resultado + a;
  }

  printf("%d", resultado);

  return 0;
}