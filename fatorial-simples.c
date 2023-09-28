#include <stdio.h>

int main(){

  int fatorial, n;

  scanf("%d", &n);

  for (fatorial = 1; n > 1; n = n -1) {
    fatorial = fatorial * n;
   
  }

  printf("%d\n", fatorial);
  

  return 0;
}