#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    int ra;
    float notas[3];
    int frequencia;
} Aluno;

int main(){
    Aluno *pAluno;
    pAluno = (Aluno *)malloc(sizeof(Aluno));

    //pAluno-> = *pAluno = acessa conteudo do endereço de pAluno 
    //setinha só para struct!!
    printf("Nome: ");
    fgets(pAluno->nome, sizeof(pAluno->nome), stdin);
    pAluno->nome(strlen(pAluno->nome)-1) = '\0';

    printf("RA: ");
    scanf("%d", &pAluno->ra);

    for(int i=0; i<3; i++){
        printf("Digite a nota: ");
        scanf("%d", &pAluno-notas[i]);
    }

    printf("Frequencia: ");
    scanf("%d", &pAluno->frequencia);

    free(pAluno);
}