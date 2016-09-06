#include <stdio.h>
#include <time.h>
#define N 10000
int main (){
    int numero, i;
    float soma = 0.0f;
    int vetor[N];
    srand(time(0));
    printf("Entre coom um numero intero nao negativo: ");
    scanf("%d", &numero);
    for (i=0; i<N; i++)
        vetor[i]= rand() %numero + 1;
    for (i=0; i<N; i++)
        soma = soma + vetor [i];
    printf("A media dos numeros e: %g\n", soma/N);
    return 0;
}

