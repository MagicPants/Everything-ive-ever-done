#include <stdio.h>
#include <math.h>

typedef struct complexo{
    float x, y;
}complexo;

void escreveComplexo(complexo c){
    printf("z = %.2f + %.2fi \n", c.x, c.y);
}

complexo leComplexo(){
    struct complexo c;
    printf("Parte Real(a) e Parte imaginária(bi): ");
    scanf(" %f %f", &c.x, &c.y);
    return c;
    //escreveComplexo(c);
}

complexo somaComplexo(complexo c1, complexo c2){
    struct complexo res; 
    res.x=(c1.x+c2.x);
    res.y = (c1.y + c2.y);
    return res;
}

double modComplexo(complexo c){
    double res;
    return res=sqrt(pow(c.x,2)+pow(c.y,2));
}

double argComplexo(complexo c){
    double aux, res;
    aux=modComplexo(c);
    return asin(c.y/aux);
}



int main(){
    struct complexo c, num, num2;
    printf("%.2f\n", argComplexo(num));
}