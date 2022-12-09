#include <stdio.h>

int menor(int vet[], int i, int m) {
  if(i < 0) {
    return m;
  }
  if(vet[i] < m) {
    m = vet[i];
  }
  return menor(vet, i-1, m);
}

int main() {
  int vetor[]= {8,2,3,5,7,11,13,17};
  int m = menor(vetor, 7, vetor[7]);
  printf("%d\n",m);
  return 0;
}