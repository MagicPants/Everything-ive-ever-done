#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* lê e guarda no vetor volumes os valores de enchimento de um dia;
retorna o número de valores lidos */

int ler_volumes(float *volumes){
    int valoresLidos, total;
    scanf("%d", &total);
    for (int i = 0; i <  total; i++)
    {
        if (scanf("%f", &volumes[i]) == 1)
        {
            valoresLidos++;
        }
    }

    return valoresLidos;
}

/* determina o volume médio de enchimento */
float volume_medio(float *volumes, int nvolumes, float max, float min){
    float totalVolumes=0.0;
    int k;
    for (int i = 0; i < nvolumes; i++)
    {
        if (volumes[i] >= min && volumes[i] <= max){
            totalVolumes += volumes[i];
            k++;
        }
    }

    return totalVolumes / k;
} 


int main(){
    float volumes[1000], min, max;
    int valoresLidos;

    valoresLidos=ler_volumes(volumes);
    printf("Foram lidos %d valores. \n", valoresLidos);

    //printf("Indique valor mínimo: ");
    scanf("%f", &min);
    //printf("\n", min);

    //printf("Indique valor máximo: ");
    scanf("%f", &max);
    //printf("\n", max);

    printf("O volume medio de enchimento foi de %.3f litros. \n", volume_medio(volumes, valoresLidos, max, min));
}

