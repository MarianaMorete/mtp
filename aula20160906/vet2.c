#include <stdio.h>
#include <stdlib.h>
int main (){
    int vetor[10];
    int aux1, i, j=9;
    printf("Digite os numeros de um vetor: ");
    for (i=0; i<10; i++)
        scanf("%d", &vetor[i]);
    for (i = 0; i <5; i++) {
        aux1=vetor[i];
        vetor[i]=vetor[j];
        vetor[j]=aux1;
        j--;
    }
    printf("\nVetor invertido: ");
    for (i = 0; i<10; i++) {
    printf("%i  ", vetor[i]);
    }
    printf ("\n");
    return 0;
}
