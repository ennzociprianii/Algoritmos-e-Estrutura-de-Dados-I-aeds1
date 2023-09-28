#include <stdio.h>


int main(){
  float x = 3.0f;
  
  float y = 4.0f;
  int z = ( x < y);
  if (!z) {
    printf("%2.f\n", x);
  }
  return 0;
}