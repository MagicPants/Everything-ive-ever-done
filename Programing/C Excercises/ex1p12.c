#include <stdio.h>
// Tiago Daniel dos Santos Leitão e Sousa up201907205

/*typedef struct tarefas{
    char t[100];
    int nTrabalhadores[28];
}tarefas;*/
int maiorNum(){ //o primeiro dia é, sempre, o dia com mais tarefas executadas
    return 1;
}

int finishedTarefas(int numTrabalhadores[100][30])
{
    int res, count=0, atualMaior=0, tarefasAcabadas[100]={}, dia=1;
    for(int j=0; j<100 ; j++){
        for(int i=0; i < 30;i++){
            if(numTrabalhadores[j][i]==-1){
                tarefasAcabadas[dia]++;     
            }
            else dia++;       
    }
    }
    for (int k = 0; k <= 100; k++){
        if (atualMaior < tarefasAcabadas[k])
        {
            res=k;
            atualMaior=tarefasAcabadas[k];
        }      
    }
    return res;
}

int maisTrabalhadores(int numTrabalhadores[100][30])
{
    int res, count = 0, atualMaior = 0, soma[100] = {}, dia = 1;
    for (int j = 0; j < 100; j++)
    {
        for (int i = 0; i < 30; i++)
        {
            if (numTrabalhadores[j][i] == -1) break;
            else{
                soma[j]+=numTrabalhadores[j][i];
            }
        }
        if (atualMaior < soma[j]){
            atualMaior=j;
        }
    }
    printf("%d", atualMaior);
    return atualMaior;
}

int main()
{
    // tarefas ficheiro1[100];
    int nTrab[100][30], i = 0, j = 0;
    char tarefa[10][100];
    FILE *tarefas;
    tarefas = fopen("tarefas.txt", "r");
    while (fscanf(tarefas, "%s", tarefa[i]) != EOF)
    {
        while (1)
        {
            fscanf(tarefas, "%d", &nTrab[i][j]);
            if (nTrab[i][j] == -1)
                break;
            j++;
        }
        j = 0;
        i++;
    }

    printf("%d \n", finishedTarefas(nTrab));
    printf("%s \n", tarefa[maisTrabalhadores(nTrab)]);
    fclose(tarefas);
}