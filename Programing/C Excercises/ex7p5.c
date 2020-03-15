#include <stdio.h>

int main(){
    int num, multiplier, shifter=0, n1;
    printf("Insira um operando:");
    scanf("%d", &num);
    printf("Insira outro operando (potencia de base 2):");
    scanf("%d", &multiplier);
    while (multiplier >0)
    {
        multiplier /= 2;
        if(multiplier%2==0) shifter++;
    }
    printf("%d\n", num << shifter);
}