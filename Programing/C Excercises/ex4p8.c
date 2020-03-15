#include <stdio.h>
float maior(float v[]){
    int i=0;
    float maior;
    while(i<10){
        i++;
        if(maior<v[i]){
            maior=v[i];
        }
    }

    return maior;
}
float menor(float v[]){
    float menor;
    for(int i=0;i<10;i++){
        if(menor>v[i]){
            menor=v[i];
        }
    }
    return menor;
}
float avg(float v[]){
    float res=0, media;
    for(int count=0; count < 10; count++){
        res+=v[count];
    }
    media=res/10;
    return media;
}

int main(){
    int  i=0;
    float x[10], n;
    while(i<10){
        printf("Introduza o elemento: ");
        scanf(" %f", &n);
        x[i]=n;
        i++;
    }
    printf("Média: %.2f\n", avg(x));
    printf("Máximo: %.2f\n", maior(x));
    printf("Menor: %.2f\n", menor(x));
    printf("Vetor: {");
    
    for(int count=0; count < 10; count++){
        printf(" %.2f", x[count]);
    }
    printf("}\n");
}