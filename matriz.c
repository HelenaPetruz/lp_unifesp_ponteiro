#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int **matriz;
    int m, n;

    printf("Linhas: ");
    scanf("%d", &m);
    printf("Colunas: ");
    scanf("%d", &n);

    matriz = (int **) malloc(m*sizeof(int*));

    for(int o=0; i<m; i++){
        matriz[i] = (int *)malloc(n*sizeof(int));
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                matriz[i][j]=1;
            }
            else{
                matriz[i][j]=0;
            }
        }
    }

    free(matriz)
    for(int o=0; i<n; i++){
        free(matriz);
    }
}