#include <stdio.h>

#define TAMANHO_MAX 15


void preencher_vetor(float v[], int dim){
    int i=0;
    float n;
    while (i < dim)
    {
        printf("Introduza o elemento: ");
        scanf(" %f", &n);
        v[i] = n;
        i++;
    }
}

void imprime_vetor(float v[], int dim)
{
    int i;
    printf("{");
    for (i = 0; i < dim; i++)
        printf(" %.2f", v[i]);
    printf(" }\n");
}


void sum_v(float x[], float vRet[]){

    for (int i = 0; i < 15; i+=2)
    {
        vRet[i]=x[i]+x[i+1];
    }

}

float range_v(float x[]){
    float menor=0, maior=0;
    for (int i = 0; i <= 15; i++)
    {
        if (menor > x[i])
        {
            menor = x[i];
        }
        printf("Menor %.2f \n", menor);
    }
    for (int i = 0; i <= 15; i++)
    {
        if (maior < x[i])
        {
            maior = x[i];
        }
        printf("Maior %.2f \n", maior);
    }
    return maior - menor;
}





int main(){
    int  dim;
    float x[TAMANHO_MAX], vRet[TAMANHO_MAX];
    printf("Qual a dimensão? ");
    scanf("%d", &dim);
    preencher_vetor(x, dim);
    sum_v(x, vRet);
    imprime_vetor(vRet, (dim/2)+1);
    printf("%.2f \n", range_v(x));
}