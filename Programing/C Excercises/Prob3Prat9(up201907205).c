//Tiago Daniel Santos Leitão Sousa up201907205 "Preparação" do problema 3
#include <stdio.h>

void media(float v[], int tamanho, float media[]){
    int i, cont=0;
    for (i = 1; i <= tamanho; i+=3){
        media[cont]=(v[i]+ v[i+1])/2;
        cont++;
    }
}



int main(){
    int i, cont=0;
    float v[100], avg[100];

    for (i = 1; i <=4; i++){
        printf("Dados do aluno %d: ",i);
        scanf("%f %f %f", &v[cont], &v[cont+1], &v[cont+2]);
        cont+=3;
    }
    media(v, cont, avg);
    cont=0;
    printf("Número  Nota 1  Nota 2  Média\n");

    for (i = 1; i <=4; i++){
        printf("%05d    %02d     %02d     %.2f\n", (int)v[cont], (int)v[cont+1], (int)v[cont+2], avg[i-1]);
        cont+=3;
    }
}

/*Dados do aluno 1: 09001 5 15
Dados do aluno 2: 10701 10 12
Dados do aluno 3: 10321 16 17
Dados do aluno 4: 10452 8 11*/