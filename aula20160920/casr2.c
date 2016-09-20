#include <stdio.h>
#include <ctype.h>
#include <math.h>

void recebe_dado (char tipo, void * endereco);

int main (){
    int i;
    float f;
    char c;
    printf(" Digite um inteiro: ");
    recebe_dado('i', &i);
    printf("\n Digite um float: ");
    recebe_dado('i', &f);
    printf("\n Digite um char: ");
    recebe_dado('i', &c);
    printf("\nQuadrado: %d \n", i*i);
    printf("Raiz: %f \n", sqrt(f));
    printf("Caractere: %c \n", (isupper(c))? tolower(c): toupper(c));
    return 0;
}


void recebe_dado (char tipo, void * endereco){
    int c;
    switch (tipo){
    case 'i': scanf("%d", (int *) endereco); break;
    case 'f': scanf("%f", (float *) endereco); break;
    case 'c': scanf("%c", (char *) endereco); break;
    }
    while ((c = getchar()) != EOF && c != '\n'); //limpa buffer
}
