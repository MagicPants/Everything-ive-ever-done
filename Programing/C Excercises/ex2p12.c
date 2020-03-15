#include <stdio.h>

typedef struct umDisco{
    int pos, ant, sem;
    char gal[5],other[300];
} cadaDisco;

int main(){
    char hellyeah[10000];
    int  i, j , readCount;
    cadaDisco ficheiro1[100];
    FILE *disco;
    disco=fopen("discos.txt", "r");

    while (fscanf(disco, "%d %d %d", &ficheiro1[i].pos, &ficheiro1[i].ant, &ficheiro1[i].sem) != EOF)
    {
        fgets(ficheiro1[i].other, 300, disco);
        //printf("%d %d %d \n", ficheiro1[i].pos, ficheiro1[i].ant, ficheiro1[i].sem);
        i++;
    }
    printf("Discos que est˜ao no top há mais do que 4 semanas: \n");
    for (int i = 0; i < 30; i++){
        if (ficheiro1[i].sem >= 4){
            printf("%s\n", ficheiro1[i].other);

        }
    }
}