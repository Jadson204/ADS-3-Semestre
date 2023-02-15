#include <stdio.h>
#include <stdlib.h>

void Ordena_selectionSort(int *v, int n) {
  int i, j, menor, troca;
  for(i = 0; i < n - 1; i++) {
    menor = i;
    for(j = i + 1; j < n; j++) {
      if (v[j] < v[menor]) {
        menor = j;
      }
    }
    if(i != menor) {
      troca = v[i];
      v[i] = v[menor];
      v[menor] = troca;
    }
  }
}

void main() {
  int i;
  int vetor[9] = {120, 150, 110, 100, 160, 140, 190, 180, 170};

  printf("Vetor desordenado: \n");
  for(i = 0; i < 9; i++) {
    printf("%d ", vetor[i]);
  }

  Ordena_selectionSort(vetor, 9);

  printf("\n\nVetor ordenado pelo metodo selectionSort: \n");
    for (int i = 0; i < 9; i++) {
      printf("%d ", vetor[i]);
    }

    return 0;
}