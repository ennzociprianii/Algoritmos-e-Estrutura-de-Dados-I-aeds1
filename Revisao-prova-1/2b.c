#include <stdio.h>
#include <math.h>

void operacao(int x){
  int x, y;
  y = sqrt(x) - 1;
  
  return y;
}

int main(){
  int x = 4;
  operacao(&x);
  printf("%d\n", x);
  return 0;
}
