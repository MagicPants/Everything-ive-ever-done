#include <stdio.h>

void multiEspecial(int n, int v1[], int v2[], int vRet[]){
    int aux=(n-1);
    for (int i = 0; i < n; i++)
    {
        //printf("  %d  ", aux);
        //printf(" v1: %d v2: %d", v1[i], v2[aux]);
        vRet[i]=v1[i]*v2[aux];
        aux--;
    }
}

int main(){
    int dim;
    int v1[dim], v2[dim], vRet[dim];
    printf("Introduza a dimensão: ");
    scanf("%d", &dim);
    printf("Primeiro vetor: \n");
    for (int i = 0 ; i < dim; i++){
        printf("Elemento %d: ", i+1);
        scanf(" %d", &v1[i]);
    }
    printf("\n");
    printf("Segundo Vetor: \n");
    for (int i = 0; i < dim; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf(" %d", &v2[i]);
    }
    multiEspecial(dim, v1, v2, vRet);
    printf("{");
    for (int i = 0; i < dim; i++)
    {
        printf("%d, ", vRet[i]);
    }
    printf("}\n");
}