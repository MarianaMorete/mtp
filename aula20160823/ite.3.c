#include <stdio.h>
int main () {
    int i, soma=0;
    char str [10];
    printf("Digite a frase: ");
    scanf("%s", &str);
    for (i=0; str[i]='\0';i++)
        soma=soma+1;
    printf ("\n O numero de caracteres na string e: %d", soma);
    return 0;
}
