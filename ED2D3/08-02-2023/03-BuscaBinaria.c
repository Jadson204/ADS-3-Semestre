#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int *vetor, int n, int elem){
  int i, inicio, meio, fim;
  inicio = 0;
  fim = n - 1;

  while(inicio <= fim){
    meio = (inicio + fim) / 2;
    if(elem < vetor[meio]) {
      fim = meio -1;
    }
    else{
      if(elem > vetor[meio]) {
        inicio = meio + 1;
      }
      else{
        return meio;
      }
    }
  }
  return -1;
}

int main() {   
  int valores[] = {8, 64, 19, 23, 480};   
  int elem = 23;

  printf("BUSCA BINARIA\n");
  int indice = buscaBinaria(valores, 5, elem);
  if(indice > -1){
    printf("O elemento foi encontrado no indice: %d\n\n", indice);
  } 
  else{
    printf("O elemento nao foi encontrado.\n\n");
  }

  return 0;
}