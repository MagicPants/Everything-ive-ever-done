#include <stdio.h>
#include <math.h>

#define combBase 350

float combustivel(char tipo)
{
    float duracao, peso;
    switch(tipo)
    {
        case 'A':
            scanf("%f %f", &duracao, &peso);
            return combBase + duracao*(peso/10);
        case 'B':
            scanf("%f %f", &duracao, &peso);
            return combBase + duracao*(peso/1500)*(peso/1500);
        case 'C':
            scanf("%f", &duracao);
            return combBase + pow(duracao,3);
    }
    return 0;

}

int main()
{
    char tipo;
    float comb, total=0;

    while(scanf(" %c", &tipo) == 1)
    {
        comb = combustivel(tipo);
        printf("%.2f\n", comb);
        total += comb;
    }

    printf("%.2f (total)\n", total);
}