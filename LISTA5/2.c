#include <stdio.h>

int main(){

  int n;
  scanf("%d", &n);
  int comp;
  comp = n;

  for (int i=0;i<n;i++){
    printf("%d\n", comp--);
  }



  return 0;
}