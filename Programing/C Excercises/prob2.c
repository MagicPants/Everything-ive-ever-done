#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

#define NUMANIMAIS 150	


typedef struct{  
    char nome[50];  
    char tipo[25];  
    char nome_dono[75];  
    int tlm_dono;
}animal;

/* problema 2.1 */
int ler_animais(animal *clinica)
{
    int i=0;
    while (scanf("%s %s %s %s %d", clinica[i].nome, clinica[i].tipo, clinica[i].nome_dono, clinica[i].nome_dono, &clinica[i].tlm_dono) == 5 && i <NUMANIMAIS)
    {
        i++;
    }
    return i;
}

/* problema 2.2 */
animal *lista_animais(animal *clinica, int Na, char *tipo, int *Nl)
{
    int count=0;
    animal retorno[1000];

    for (int i = 0; i < Na; i++){
        if(strcmp(clinica[i].tipo, tipo)==0){
            strcpy(retorno[i].nome, clinica[i].nome);
            strcpy(retorno[i].tipo, clinica[i].tipo);
            strcpy(retorno[i].nome_dono, clinica[i].nome_dono);
            retorno[i].tlm_dono = clinica[i].tlm_dono;
            count++;
        }
    }
    *Nl= count;
    return retorno;
}

void guarda_lista(animal *lista, int n, char *nomeFicheiro)
{
    /* problema 2.3 */
}

void listaRegistos(animal *animais, int num)
{
    int i;
    for (i = 0; i < num; i++)
        printf("%s %s %s %d\n", animais[i].nome, animais[i].tipo, animais[i].nome_dono, animais[i].tlm_dono);
}


int main()
{  
    animal clinica[NUMANIMAIS], *lista; 
    int numRegistos, n, n_lista;

    numRegistos=ler_animais(clinica);
    printf("Numero registos lidos: %d\n", numRegistos);
    listaRegistos(clinica, numRegistos);
    lista = lista_animais(clinica, numRegistos, "coelho", &n_lista);  
    printf("Numero de registos \"coelho\": %d\n", n_lista);  
    listaRegistos(lista, n_lista);	  
    return 0;  
}
