//Tiago Daniel Santos Leitão Sousa up201907205 "Preparação" do problema 2
#include <stdio.h>

int compacta(char orig[], int N, char dst[]){
    int i=0, k=0, l;
    for (i = 0; i < N; i++){
        if(orig[i]==orig[1+i])
          continue;
        else{
            dst[k]=orig[i];
            k++;
        }

    }
    return k;
}
int main(){
    char  careter, vetor[100], destino[100];
    int i=0;

    while (1)
    {
        scanf(" %c", &careter);
        if(careter=='.')
            break;
        else{
            vetor[i]=careter;
        }
        i++;
        //printf("%c\n", vetor[i]);
    }
    int cdestino = compacta(vetor, i, destino);
    for (i = 0; i <cdestino; i++){
        printf("%c", destino[i]);
    }
    printf("\n");
}


/*    int i=0, n;
    while(i<tamanho){
        printf("Introduza o elemento %d: ",i+1);
        scanf(" %d",&n);
        v[i]=n;
        i++;
    }}*/