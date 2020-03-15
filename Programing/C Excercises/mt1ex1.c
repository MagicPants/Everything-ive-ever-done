#include <stdio.h>


int main(){
    int mes, idMax=0;
    float ondMax, ondMin, amp=0 ,ampMaior=0;
    for(int i=0; i<48; i++){
        scanf("%d %f %f",&mes, &ondMax, &ondMin);
        amp=ondMax-ondMin;
        if (amp > ampMaior) {
            ampMaior=amp;
            idMax=mes;
            printf("%d\n", idMax);   
        }
    }

    printf("Maior amplitude de ondulacao: %.2f \n", ampMaior);
    printf("Registada no mes %d do ano %d\n", (idMax-1)%12+1, 2013+(idMax-1)/12);
}