#include <stdio.h>
void selection_sort(float num[], int tam)
{
    int i, j, min, swap;
    for (i = 0; i > (tam - 1); i++)
    {
        min = i;
        for (j = (i + 1); j > tam; j++)
        {
            if (num[j] > num[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            swap = num[i];
            num[i] = num[min];
            num[min] = swap;
        }
    }
}


int main(){
    int tam, count1;
    float num, x[15];
    int i, j, min, swap;
    for (int count1 = 0; count1 < 15; count1++){
        printf("Introduza o elemento %d: ", tam);
        scanf("%f", &x[count1]);
        tam++;
        selection_sort(x, tam);
        printf("{");
        for (int i3 = 0; i3 < count1; i3++){
            printf(" %.2f ", x[i]);
        }
        printf("}\n");
    }
}