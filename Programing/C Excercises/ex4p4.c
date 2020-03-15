#include <stdio.h>
int main(){
    int num, div=2;
    printf("num?");
    scanf("%d", &num);
    while (num >1){
        if ((num%div)==0){
            num/=div;
            printf("%d \n",div);
        } else{
            div++;
        }
    }
}