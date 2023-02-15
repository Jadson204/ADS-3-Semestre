#include <stdio.h>
#include <stdlib.h>

void Ordena_insertionSort(int *v, int n) {
  int i, j, aux;
  for(i = 1; i < n; i++) {
    aux = v[i];
    for(j = i; (j > 0) && (aux < v[j-1]); j--) {
      v[j] = v[j - 1];
    }
    v[j] = aux;
  }
}

void main() {
  int i;
  int vetor[9] = {120, 150, 110, 100, 160, 140, 190, 180, 170};

  printf("Vetor desordenado: \n");
  for(i = 0; i < 9; i++) {
    printf("%d ", vetor[i]);
  }

  Ordena_insertionSort(vetor, 9);

  printf("\n\nVetor ordenado pelo metodo insertionSort: \n");
    for (int i = 0; i < 9; i++) {
      printf("%d ", vetor[i]);
    }

    return 0;
}