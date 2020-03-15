#include <stdio.h>

int main(){
    int n, reverse=0;
    printf("Insira o número: ");
    scanf("%d", &n);
    while(n!=0){
        reverse *=10;
        reverse +=n%10;
        n=n/10;
    }
    printf("O inverso do número %d é %d\n", n, reverse);
}