#include <stdio.h>
#include <stdlib.h>

int buscaOrdenada(int *vetor, int n, int elem){
  int i;
  for(i = 0; i < n; i++) {
    if(elem == vetor[i]){
      return i;
    } else{
      if(elem < vetor[i]){
        return -1;
      }
    }
  }
  return -1;
}

int main() {   
  int valores[] = {10, 20, 30, 40, 50};   
  int elem = 20;

  printf("BUSCA ORDENADA\n");
  int indice = buscaOrdenada(valores, 5, elem);
  if(indice > -1){
    printf("O elemento foi encontrado no indice: %d\n\n", indice);
  } 
  else{
    printf("O elemento nao foi encontrado.\n\n");
  }

  return 0;
}