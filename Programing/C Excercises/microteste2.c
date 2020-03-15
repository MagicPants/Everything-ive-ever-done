/* 

Implemente a função compacta com as seguintes características:
one:Remove todos os elementos adjacentes iguais no vetor de entrada ao copiar para o vetor de saída.
O tamanho do vetor de entrada é indicado no parâmetro n
O retorno da função deverá ser o tamanho do vetor de saída

Ficheiro .c: 

Ao indicar o resultado dos testes, copie apenas o vetor entre { }, por exemplo: { 1 0 1 }

*/

#include <stdio.h>

#define TAMANHO_MAX 20

/********************************************/
/*       ALTERAR APENAS ESTA FUNCAO         */

int compacta(int orig[], int n, int dst[]) // tamanho= N
{
    int count=0;
    if (n < 0 || n >= TAMANHO_MAX)
    {
        return 0;
    }
    for (int i = 0; i <= n; i++)
    {
        if(orig[i]==orig[i+1])
        {
            continue;
        }
        else 
        {
            dst[count]=orig[i];
            count++;
        }
    }
    return count;
}





/********************************************/

void imprime_vetor(int v[], int n);

int main()
{
    int v1[TAMANHO_MAX] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1};
    int v2[TAMANHO_MAX] = {1, 0, 0, 0, 0, 1, 0, 1, 1, 0};
    int res[TAMANHO_MAX], tam;

    tam = compacta(v1, 10, res);
    printf("Teste 1: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, 0, res);
    printf("Teste 2: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, 5, res);
    printf("Teste 3: ");
    imprime_vetor(res, tam);

    tam = compacta(v1, -5, res);
    printf("Teste 4: ");
    imprime_vetor(res, tam);

    tam = compacta(v2, 7, res);
    printf("Teste 5: ");
    imprime_vetor(res, tam);
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for (i = 0; i < n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}