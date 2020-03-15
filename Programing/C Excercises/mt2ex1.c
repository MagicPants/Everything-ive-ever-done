#include <stdio.h>
#include <math.h>

int main(){
    int equipa1, equipa2, total1=0, total2=0;
    for (int i = 0; i < 10; i++){
        scanf(" %d %d", &equipa1, &equipa2);
        if (equipa1 >= 90) total1+=2;
        else if (equipa2 >= 90) total2 += 2;
        else if (equipa2 > 60) total2 += 1;
        else if (equipa1 > 60) total1 += 1;
    }
    if (total1>total2) printf("A nossa equipa ganhou %d-%d\n",total1, total2);
    else if (total2 > total1) printf("A nossa equipa ganhou %d-%d\n", total1, total2);
}