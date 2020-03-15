#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int numLinhas(char *ficheiros, int *mediaPalavras){
    char careter;
    FILE *f;
    int i = 0, nlinhas=0, aux=1;

    f = fopen(ficheiros, "r");
    while (fscanf(f, "%c", &careter) >= 1)
    {
        if(careter=='\n'){
            nlinhas+=1;
        }
        else if(careter==' '){
            aux+=1;
        }
        i++;
    }
    fclose(f);
    *mediaPalavras = aux/nlinhas;
    return nlinhas;
}

int main(){
    char ficheiro[100];
    int palavras;

    printf("Qual o ficheior? ");
    scanf("%s", ficheiro);
    printf("%d %d\n", numLinhas(ficheiro, &palavras), palavras);


}