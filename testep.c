#include <stdio.h>

int main(){
  int x, y;
  int *end_x, *end_y;
  end_x = &x;
  end_y = &y;

  printf("%d\n", end_x);
  printf("%d\n", end_y);


  if (end_x > end_y) {
    printf("A maio eh %d", end_x);
  } else {
    printf("A maior eh %d", end_y);
  }

  return 0;
}