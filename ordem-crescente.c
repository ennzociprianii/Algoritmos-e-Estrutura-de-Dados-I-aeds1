#include <stdio.h>

int main(){
    
    int x,y,z;

    scanf("%d%d%d", &x, &y, &z);

    if(x > y && y > z){
        printf("%d %d %d", x, y, z);
    } else if (y > x && x > z) {
        printf("%d %d %d", y, x, z);
    } else if (z > x && x > y) {
        printf("%d %d %d", z, x, y);
    } else if (y > z && z > x) {
        printf("%d %d %d", y, z, x);
    } else if (x > z && z > y) {
        printf("%d %d %d", x, z, y);    
    } else if(z > y && y > x) {
        printf("%d %d %d", z, y, x);
    } 
    


    return 0;
}
