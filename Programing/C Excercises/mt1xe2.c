#include <stdio.h>
#include <math.h>
#define CombustivelBase 350

float combustivel(char tipo)
{
    float duracao, peso, combTotal, comb;

    switch (tipo)
    {
        case 'A':
        {
            scanf("%f %f", &duracao, &peso);
            return CombustivelBase + duracao * (peso / 10);
            break;
        }
        case 'B':
        {
        scanf("%f %f", &duracao, &peso);
        return CombustivelBase + duracao * pow(peso / 1500, 2);
        break;
        }
        case 'C':
        {
            scanf("%f", &duracao);
            return CombustivelBase + pow(duracao, 3);
            break;
        }
    }
}

int main(){
    char tipo;
    float duracao, peso, combTotal,comb;

    while ((scanf(" %c", &tipo))==1)
    {
        combTotal+=combustivel(tipo);
    }
    printf("%.2f (total)\n", combTotal);


}