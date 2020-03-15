#include <stdio.h>

int multiplicacao(int primeiroNumero, int segundoNumero){
    {
        if (!primeiroNumero || !segundoNumero)
            return 0;
        if (primeiroNumero == 1){
            printf("YEAH pff \n");
            return segundoNumero;}
        if (segundoNumero == 1){
            printf("YEAH\n");
            return primeiroNumero;}

        return multiplicacao(primeiroNumero - 1, segundoNumero - 1) + primeiroNumero + segundoNumero - 1;
    }
}
/* multiplicprimeiroNumeroção() + multiplicprimeiroNumeroção() */

int main(){
    int num1, num2;
    printf("Número um e dois: ");
    scanf("%d %d", &num1, &num2);
    printf("%d \n", multiplicacao(num1, num2));
}