#include <ctype.h>
#include <stdio.h>
int main () {
    int indice = 0;
    char investigador;
    char frase [256];
    int cont=0;
    printf ("Escreva uma frase: ");
    gets(frase);
    investigador = frase[indice];
    while (investigador){
        if (isalpha(investigador))
            cont++;
        indice++;
        investigador = frase[indice];
    }
    printf("O numero de letras na frase digitada eh: %d\n", cont);
    return 0;
}
