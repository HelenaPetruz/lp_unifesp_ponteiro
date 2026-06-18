#include <stdio.h>

void imprimeVetor(int*, int);

int main(){
    int v[10];

    for(int i=0; i<10; i++){
        printf("V[%d] = ", i);
        scanf("%d", v+i); //v+i é a primeira posicao do vetor + i = v[i]
    }

    printf("Endereço da 1º posição: %p", v); //v é um ponteiro para o primeiro elemento do vetor (v é um ponteiro para int)
    printf("Endereços:");
    for(int i=0; i<10; i++){
        printf("%p\n", &v[i]);
    }
}

void imprimeVetor(int *vet, int n){
    for(int i=0; i<n; i++){
    printf("%d", vet[i]); // []=indice = soma 1 ao ponteiro da 1º posição
    }
}