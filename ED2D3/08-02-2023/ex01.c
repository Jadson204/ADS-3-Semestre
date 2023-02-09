#include <stdio.h>
#include <stdlib.h>

int buscaLinear (int *vetor, int n, int elem) {
  int i;
  for (i = 0; i < n; i++) {
    if (elem == vetor[i]) {
      return i;
    }
  }
  return -1;
}

int main () {
  int *vetor[] = {2, 3, 8, 9, 20, 4, 6, 5};
  int n = sizeof(vetor);
  printf("Elemento = 2, Índice = %d\n", buscaLinear(*vetor, n, 2));
  return 0;
}