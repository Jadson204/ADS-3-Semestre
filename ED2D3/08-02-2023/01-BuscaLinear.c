#include <stdio.h>
#include <stdlib.h>
  
int buscaLinear(int *vetor, int n, int elem){    
  int i;
  for(i = 0; i < n; i++){    
    if(vetor[i] == elem){    
      return i;    
    }    
  }    
     
  return -1;    
}


int buscaOrdenada(int *vetor, int n, int elem){
  int i;
  for(i = 0; i < n; i++) {
    if(elem == vetor[i]){
      return i;
    }
    else{
      if(elem < vetor[i]){
        return -1;
      }
    }
  }
  return -1;
}


 
int main() {   
  int valores[] = {32, 7, 21, 4, 90};
  int valoresOrdenados = {10, 20, 30, 40, 50};   
  int elem = 32;
 
  printf("BUSCA LINEAR\n");
  int indice = buscaLinear(valores, 5, elem);
  if(indice > -1){
    printf("O elemento foi encontrado no indice: %d\n\n", indice);  
  }
  else{
    printf("O elemento nao foi encontrado.\n\n");
  }

  printf("BUSCA ORDENADA\n");
  int indice2 = buscaOrdenada(valoresOrdenados, 5, elem);
  if(indice2 > -1){
    printf("O elemento foi encontrado no indice: %d\n\n", indice2);
  } 
  else{
    printf("O elemento nao foi encontrado.\n\n");
  }

  return 0;
}