#include <stdio.h>

int mdc(int x, int y){
    if(y==0){
        return x;
    }
    else 
        return mdc(y, x%y);
}

int main()
{
    int num1, num2;
    printf("Número um e dois: ");
    scanf("%d %d", &num1, &num2);
    printf("%d \n", mdc(num1, num2));
}