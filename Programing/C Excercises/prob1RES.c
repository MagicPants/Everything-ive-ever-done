#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXT 10
#define TSIZE 12
#define NSIZE 50

/* Guarda nomes das equipas no vetor de strings names e o total de 
 * pontos conquistados de cada equipa na mesma posição no vetor 
 * totalPontos. Retorna o número de equipas lidas, sem repetições.
 * Nota: os nomes dos jogadores são lidos, mas não são guardados. 
 * */
int lerEquipas(char nomes[][TSIZE], int totalPontos[]){
    int c=0, pontos, i;
    char nome1[NSIZE], nome2[NSIZE], equipa[TSIZE];
    while((scanf("%s %s %s %d", nome1, nome2, equipa, &pontos)==4)){
            for(i=0; i<c; i++){
                if(strcmp(nomes[i], equipa)==0){
                    break;
                }
            }
            if(i==c){
                printf("!!!!!\n");
                if(c<MAXT){
                    strcpy(nomes[c], equipa);
                    totalPontos[c]=pontos;
                    c++;
                }
            }
            else{
                totalPontos[i]+=pontos;
            }

    }
return c;
}

/* Determina qual a equipa com maior pontuação.
 * Retorna a posição dessa equipa no vetor.
 * */
int melhorPontuacao(int pontos[], int n){
    int c;
    for(int i=0; i<n; i++){
        if(pontos[i+1]>pontos[i]){
            c=(i+1);
        }
        else{
            c=i;
        }
    }
return c;
}

/*
 * ***** NAO ALTERAR ESTE CODIGO ****
 * */

int main()
{
    int nequipas, mequipa;
    char equipas[MAXT][TSIZE]={0};
    int pontosEquipas[MAXT]={0};

    nequipas = lerEquipas(equipas, pontosEquipas);
    printf("Total de equipas: %d\n", nequipas);

    mequipa = melhorPontuacao(pontosEquipas, nequipas);
    printf("Equipa com maior pontuacao: %s (%d pontos)\n", equipas[mequipa], pontosEquipas[mequipa]);

	return 0;
}
