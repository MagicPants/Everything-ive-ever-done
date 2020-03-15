#include <stdio.h>

int main(){
    int v1[100], v2[100], v[5], jj=0;

    printf("Vetor 1:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Introduza %dº número:", i+1);
        scanf("%d", &v1[i]);
    }

    printf("Vetor 2:\n");
    for (int k = 0; k < 5; k++)
    {
        printf("Introduza %dº número:", k+1);
        scanf("%d", &v2[k]);
    }

    for (int j = 0; j < 5 ;j++){
        for (int ii=0; ii < 5; ii++){
            if(v1[j]==v2[ii]) {
                v[jj]=v1[j];
                jj++;
            }
        }
    }
    printf("Comuns: ");
    for (int count = 0; count < jj; count++){
        printf(" %d", v[count]);
    }
    printf("\n");
}
