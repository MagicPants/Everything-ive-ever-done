#include <stdio.h>
#include "datas.h"


/* Retorna a data correspondente ao dia seguinte da data d */
data diaSeguinte(data d)
{
  switch (d.mes)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (d.mes == 31){
          d.dia = 1;
          d.mes += 1;
          break;
        }
        else{
          d.dia += 1;
          break;
        }

    case 4:
    case 6:
    case 9:
    case 11:
      if (d.mes == 30)
      {
        d.dia = 1;
        d.mes += 1;
        break;
      }
      else
      {
        d.dia += 1;
        break;
      }

    case 2:
      if (bissexto(d.ano) == 1 && d.dia == 28)
      {
        d.dia = 1;
        d.mes = 3;
      }
      else if (bissexto(d.ano) == 0 && d.dia == 27)
      {
        d.dia = 1;
        d.mes = 3;
      }
      else
        d.dia += 1;
      break;
  }
  return d;
}


/* Retorna a data correspondente ao dia anterior à data d  */
data diaAnterior (data d){
  if(d.dia==1){
    switch(d.mes){
      case 1:
      break;
  }
  }
  
  return d;
}


/* Retorna a data correspondente a somar k dias à data d (k pode ser negativo)  */
data somaDias (data d, int k) {
  /* a implementar...  */
  /* usar funcoes diaAnterior e diaSeguinte iterativamente  */
  return d;
}

int bissexto(int ano) {
  if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
    return 1;
  return 0;
}

int diasDoMes(int mes, int ano) {
   int ndias[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   
   if (bissexto(ano))
     ndias[1]++;
   
   return ndias[mes-1];
}

int dataValida(data d) {
    if (d.ano < 1)
      return 0;
    if (d.mes < 1 || d.mes > 12)
      return 0;
    if (d.dia < 1 || d.dia > diasDoMes(d.mes, d.ano))
      return 0;
    
    return 1;
}

void escreveData(char destino[], data d) {
  char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; 
  sprintf(destino, "%02d de %s de %d", d.dia, meses[d.mes-1], d.ano);
}


int main(){
  
}