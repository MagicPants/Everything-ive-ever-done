#include <stdio.h>
#include <math.h>

// s=(-b-sqrt(pow(b,2)-4*a*c))/2*a
int main(){
    float a, b, c, s1, s2;
    printf("Insira os coeficientes da equacao (axˆ2+bx+c=0):");
    scanf("%f %f %f", &a, &b, &c);
    if ((pow(b, 2) - 4 * a * c) < 0 ){
        printf("A equação não o tem solucoes reais\n");
    }
    else if ((pow(b, 2) - 4 * a * c) >= 0){
        s1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
        s2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
        printf("x=%.3f x=%.3f\n",s1,s2);
    }
}