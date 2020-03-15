#include <stdio.h>

// < >

int main(){
    char car;
    int linha, coluna, count1 = 1, count2=1, count3=1, i = 0;
    printf("Introduza um carater: ");
    scanf("%c", &car);
    printf("Introduza o número de linhas: ");
    scanf("%d", &linha);
    printf("Introduza o número de colunas: ");
    scanf("%d", &coluna);
    if (i == 0)
    {
        while (count1 < coluna)
        {
            printf("%c", car);
            count1++;
        }
        i++;
    }
    for(i=1;i!=linha;i++){
        printf("%c\n%c", car, car);
        for (count2 = 1; count2 <= coluna - 2; count2++)
        {
            printf("_");    
        }
    }
    printf("%c\n",car);
    if (i == linha)
    {
        while (count3 <= coluna)
        {
            printf("%c", car);
            count3++;
        }
        i++;
    }
    printf("\n");

}