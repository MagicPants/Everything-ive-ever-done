#include <stdio.h>
#include <math.h>

#define combBase 350

int main()
{
    char tipo;
    float duracao, peso, comb, total=0;

    while(scanf(" %c", &tipo) == 1)
    {
        switch(tipo)
        {
            case 'A':
                scanf("%f %f", &duracao, &peso);
                comb = combBase + duracao*(peso/10);
                break;
            case 'B':
                scanf("%f %f", &duracao, &peso);
                comb = combBase + duracao*(peso/1500)*(peso/1500);
                break;
            case 'C':
                scanf("%f", &duracao);
                comb = combBase + pow(duracao,3);
                break;

        }
        printf("%.2f\n", comb);
        total += comb;
    }

    printf("%.2f (total)\n", total);
}