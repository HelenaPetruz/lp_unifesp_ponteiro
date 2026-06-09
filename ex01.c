#include <stdio.h>

int main(){
    int n;
    int *pn; //guarda endereço de memória de numeros inteiros
    float x;
    float *px;

    pn = &n; //pn está recebendo endereço de memória da variavel n
    px = &x;

    n = 3;
    printf("%d", n);
    printf("%d", *pn); // acessa o conteudo da variavel de onde pn aponta
    *pn = 4;
    printf("%d", n);
    printf("%d", *pn);
}