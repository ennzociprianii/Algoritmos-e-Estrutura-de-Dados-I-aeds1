#include <stdio.h>

int main(){
  int n, posicao, menor;
  scanf("%d", &n);
  
  int x[n];
  for (int i=0; i<n; i++) {
    scanf("%d", &x[i]);
  }

  menor = x[0];
  for (int i=1; i<n; i++){
    if (menor > x[i]){
      menor = x[i];
      posicao = i;
    }
  }

  printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
  


  


  return 0;
}