#include <stdio.h>
int main()
{
    float num;
    int numFar, numClose, resto;
        printf("Insira um número: ");
    scanf("%f", &num);
    num += 0.5;
    resto = (int)num%2;
    if (resto == 1){
        numClose = num+1;
        numFar = num-1;    }
        else
        {
            numClose = num + 2;
            numFar = num - 2;
        }
    printf("%d %d \n", numFar, numClose);
}