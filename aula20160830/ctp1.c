#include <ctype.h>
#include <stdio.h>
int main () {
    int indice = 0; //1o caractere da string
    char investigador;
    char frase [256];
    printf ("Escreva uma frase: ");
    gets(frase);
    investigador = frase[indice];
    while (investigador){
        frase[indice] = tolower(investigador);
        indice++;
        investigador = frase[indice];
    }
    printf("%s\n", frase);
    return 0;
}
