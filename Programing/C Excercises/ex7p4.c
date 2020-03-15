#include <stdio.h>
int main(){
    float i = 0, pAI, pBI, pAF, pBF, tA, tB;
    printf("País A (pop/taxa): ");
    scanf("%d %f", &pAI, &tA);
    printf("País B (pop/taxa): ");
    scanf(" %d %f", &pBI, &tB);
    while (pAF >= pBF)
    {
        

        pAF += pAI*(1+tA/100);
        pBF += pBI*(1+tB/100);
        i++;
    } 
    printf("A população de B ultrapassara a população de A em %d anos. \n", i);
}