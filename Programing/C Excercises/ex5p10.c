#include <stdio.h>
#include <string.h>

int contar(char *frase){
    int count=1;
    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == ' ')
            count++;
    }
    return count;
}

int length(char *frase){
    int count=0, countFinal=0, i=0;
    while(frase[i]!='\0'){
        if(frase[i]!=' '){
            count++;
        }
        else if (countFinal < count)
        {
            countFinal=count;
        }
        if (frase[i] == ' ')
        {
            count=0;
        }
        i++;
    }
    return countFinal;
}


int main(){
    char frase[300];
    int count=1, i;
    printf("Frase?");
    fgets(frase, 300, stdin);
    printf("Número de palavras: %d\n", contar(frase));
    printf("Maior palavra: %d \n", length(frase));


}