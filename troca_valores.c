#include <stdio.h>

void trocaValores(int*, int*);
void trocaMaior(int*, int*);
int somaDobro(int*, int*);

int main(){
    int n1, n2, *pn1;
    

    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    pn1 = &n1;
    printf("\nEndereço de n1: %p", pn1);
    printf("\nValor de n1: %d", *pn1);

    trocaValores(&n1, &n2); // & passa endereço de memoria da variavel
    printf("\nTroca valores: n1=%d, n2=%d", n1, n2);

    trocaMaior(&n1, &n2);
    printf("\nTroca maior: n1=%d, n2=%d", n1, n2);
}

void trocaValores(int *n1, int *n2){
    int aux;
    aux = *n1; // aux recebe valor que está onde n1 aponta - acessa conteudo com *
    *n1 = *n2;
    *n2 = aux;
}

void trocaMaior(int *n1, int *n2){
    int aux;
    if(*n1 < *n2){
        aux = *n1;
        *n1 = *n2;
        *n2 = aux;
    }
}

int somaDobro(int *n1, int *n2){
    *n1 = *n1*2;
    *n2 = *n2*2;
    return *n1+*n2;
}