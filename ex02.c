#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int *pn;
    pn = NULL; //aponta para nada

    char texto[] = "Mensagem";
    char *pTexto;
    pTexto = (char *) malloc(strlen(texto)+1)*sizeof(char);
    strcpy(pTexto,texto);
    printf("%s", pTexto);
    for(int i=0, i<strlen(pTexto); i++){
        printf("%c \n", pTexto[i]);
    }
    printf("%s", pTexto);
    free(pTexto);

    int n;
    printf("Tamanho vetor: ");
    scanf("%d", &n);

    int *vetor = (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        vetor[i] = i;
    }
    free(vetor); //libera espaço de memória
}