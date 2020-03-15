#include <stdio.h>

int main(){
    float var1, var2, res;
    char grandPretendida;
    while(1){
        scanf(" %f %f",&var1, &var2);
        if (scanf(" %c",&grandPretendida)!=1) break;
        switch(grandPretendida)
        {
            case 'V':
            {
                res=var1*var2;
                printf("%.2f V\n", res);
                break;
            }
            case 'R':
            {
                res=var2/var1;
                printf("%.2f Ohm\n", res);
                break;
            }
            case 'I':
            {
                res=var1/var2;
                printf("%.2f A\n", res);
                break;
            } 
        }


    }
}