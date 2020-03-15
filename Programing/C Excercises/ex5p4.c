// < >
#include <stdio.h>

int main(){
    char l;
    int a=0,e=0,i=0,o=0,u=0, n1, n2; 
        printf("Qual é a frase? ");
    do{
        scanf("%c", &l);
        switch (l){
            case 'a':
            case 'A': a+=1; break;
            case 'E':
            case 'e': e+=1; break;
            case 'I':
            case 'i': i+=1; break;
            case 'O':
            case 'o': o+=1; break;
            case 'U':
            case 'u': i+=1; break;
        }
    } while (l !='.');
    printf("A-%d\nE-%d\nI-%d\nO-%d\nU-%d\n", a,e,i,o,u);
}