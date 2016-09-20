#include <stdio.h>
#include <stdlib.h>

void pares ();
void impares ();

int main (){
    char escolha [256];
    printf("Escolha se deseja ver os numeros pares ou impares? \n");
    fgets(escolha, sizeof(escolha), stdin);
    if (strncmp(escolha, "pares", 5) == 0)
        pares ();
    else
        impares ();

    return 0;
}

void pares (){
    int i;
    printf("Numeros pares: \n");
    for(i=1; i<=10; i++)
        if (i%2 == 0)
            printf("%d ", i);
}
void impares (){
    int i;
    printf("Numeros impares: \n");
    for(i=1; i<=10; i++)
        if (i%2 != 0)
            printf("%d ", i);
}
