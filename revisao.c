#include <stdio.h>

int main(){
    int i, *pi;
    float f, *pf;
    char c, *pc;

    printf("I: ");
    scanf("%d", &i);
    printf("F: ");
    scanf("%f", &f);
    printf("C: ");
    scanf("%c", &c);
    
    pi = &i;
    pf = &f;
    pc = &c;

    printf("Valores inciais: \nI=%d \nF=%f \nC=%c", i, f, c);

    *pi = 0;
    *pf = 0;
    *pc = 0;

    printf("Valores modificados pelos ponteiros: \nI=%d \nF=%f \nC=%c", i, f, c);
}