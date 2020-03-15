#include <stdio.h>
#include <math.h>


int fatorial(int num){
    int res=1;
    while (num > 0){
        res*=num;
        num--;
    }
    return res;
}

float seno(float angulo, float tolerancia, int *termos){
    float res=0;
    int aux, n=1;
    aux = res+tolerancia;

    while (res > aux)
    {
        res += pow(-1, n + 1) * ((pow(angulo, 2*n - 1)) / fatorial(2*n - 1));
        n++;
        printf("%d\n", n);
        printf("%f\n", res);
        termos=&n;
    }
    return res;
}

int main()
{
    float angulo, tolerancia, res;
    int n;
    printf("Qual o valor do ângulo? ");
    scanf("%f", &angulo);
    printf("Qual o valor da tolerancia? ");
    scanf("%f", &tolerancia);
    res=seno(angulo, tolerancia, &n);
    printf("%f %d\n", res, n);
}