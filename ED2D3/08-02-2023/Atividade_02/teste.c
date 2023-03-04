#include <stdio.h>
#include <stdlib.h>

int existe(int vet[10], int valor) {
    int i;
    for(i=0; i<10; i++) {
        if(vet[i]==valor) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int valor,vet[10],i, ultima_posicao = 0;
    while(1) {
        printf("valor:");
        scanf("%d",&valor);
        if(valor==10) {
            break;
        }
        if(!existe(vet, valor)) {
            vet[ultima_posicao++] = valor;
        }
    }

    for (i=0; i < ultima_posicao; i++) {
        printf("%d ", vet[i]);
    }
    return 0;
}