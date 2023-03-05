#include <stdio.h>


void heapify(int arr[], int n, int i) {
    // Inicializa o maior como raiz
    int largest = i;
    // Calcula o índice do filho esquerdo e direito
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    // Verifica se o filho esquerdo é maior que a raiz
    if (l < n && arr[l] > arr[largest])
        largest = l;


    // Verifica se o filho direito é maior que a raiz
    if (r < n && arr[r] > arr[largest])
        largest = r;


    // Troca a raiz se necessário
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        // Heapify recursivamente a subárvore afetada
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
    // Constroi um maxheap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    // Extrai os elementos do heap um por um
    for (int i = n - 1; i >= 0; i--) {
        // Move o elemento raiz para o fim
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;


        // Heapify a raiz reduzida
        heapify(arr, i, 0);
    }
}


// Exemplo de uso:
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);


    heapSort(arr, n);


    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

