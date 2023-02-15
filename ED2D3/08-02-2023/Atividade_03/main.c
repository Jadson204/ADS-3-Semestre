#include <stdio.h>
#include <stdlib.h>

void Ordena_bubbleSort(int *v, int n) {
  int i, continua, aux, fim = n;
  do {
    continua = 0;
    for(i = 0; i < fim - 1; i++) {
      if(v[i] > v[i + 1]) {
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
        continua = i;
      }
    }
    fim--;
  } while(continua != 0);
}

void main() {
  int i;
  int vetor[9] = {120, 150, 110, 100, 160, 140, 190, 180, 170};

  printf("Vetor desordenado: \n");
  for(i = 0; i < 9; i++) {
    printf("%d ", vetor[i]);
  }

  Ordena_bubbleSort(vetor, 9);

  printf("\n\nVetor ordenado pelo metodo bubbleSort: \n");
    for (int i = 0; i < 9; i++) {
      printf("%d ", vetor[i]);
    }

    return 0;
}
