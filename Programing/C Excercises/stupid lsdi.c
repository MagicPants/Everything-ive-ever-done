#include <stdio.h>

int main(){
    int x, y, z;
    scanf("%d", &x);
    y=x;
    while (x < z){
        y/=2;
        z=y*y;
    }
    z=0;
    while (x < z){
        y=y+1;
        z=y*y;
    }
    printf("%d\n", y-1);
}