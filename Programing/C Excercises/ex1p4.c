#include <stdio.h>

int main(){
    int soma, in, resultadoDiv, divisor=1, count=0, primeiro;
    printf("Insira um número: ");
    scanf("%d", &in);
    while (resultadoDiv != 0)
    {
        divisor*=10;
        resultadoDiv=in/divisor;
        count+=1;
        if(count==1){
            primeiro = in - (resultadoDiv*10);
            soma+=primeiro;
        }
        else if(count!=1 && count!=0)
        {
            soma +=((in - (resultadoDiv *divisor))/(divisor/10));
        }
    }
    printf("%d\n",soma);
}