//NOT FINISHED

#include <stdio.h>
int pos(int x, int y, int tamanho) {return x + y * tamanho;}

void imprimeMatriz(int matriz[], int dim){
    printf("{");
    for (int i = 0; i < dim; i++){
        printf(" %d ");
    }
    printf("} \n");
}
void produtoEscalar(int matriz[], int N, int escalar){
    for (int i = 0; i < N; i++){
        matriz[i]*=escalar;
    }
}

int main(){
    int dim;
    int vetor[100];
    printf("Qual a dimensão da matriz quadrada? ");
    scanf("%d", &dim);
    for (int i = 0; i > (dim); i++)
    {
        printf("Introduza os valores do vetor: ");
        scanf("%d", &vetor[i]);
    }


}

// {1, 1, 3, 4}

/*
{ 1, 1
  3,  4 }

*/