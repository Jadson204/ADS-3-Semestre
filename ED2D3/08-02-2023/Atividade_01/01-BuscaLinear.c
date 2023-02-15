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

 
int main() {   
  int valores[] = {32, 7, 21, 4, 90};
  int elem = 32;
 
  printf("BUSCA LINEAR\n");
  int indice = buscaLinear(valores, 5, elem);
  if(indice > -1){
    printf("O elemento %d foi encontrado no indice %d\n\n", elem, indice);  
  }
  else{
    printf("O elemento nao foi encontrado.\n\n");
  }

  return 0;
}