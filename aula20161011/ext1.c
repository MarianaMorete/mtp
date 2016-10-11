#include <stdio.h>
#include <stdlib.h>
float * recebeNumero(float * vetor, int * ptamanho);
float media (float * vetor, int tamanho);
float MostraMaior (float * vetor,int tamanho);
float MostraMenor (float * vetor, int tamanho);
int main(){
    float * vetor = NULL;
    int tamanho = 0, opc, i;
    do {
        vetor = recebeNumero(vetor, &tamanho);
        printf("Media: %g\n", media(vetor, tamanho));
        printf("Maior numero: %g\n ", MostraMaior(vetor, tamanho));
        printf("Menor numero: %g\n ", MostraMenor (vetor, tamanho));
        printf("Deseja entrar com outro? (0 - nao; 1 - sim): ");
        scanf("%d", &opc);
    }while (opc != 0);
    free(vetor);

    return 0;
}

float * recebeNumero(float * vetor, int * ptamanho){
    (*ptamanho)++;
    if (vetor == NULL)
        vetor = (float *) malloc (sizeof(float));
    else
        vetor = (float *) realloc (vetor, (*ptamanho)*sizeof(float));
    printf("Entre com um numero: ");
    scanf("%f", &vetor[(*ptamanho)-1]);
    return vetor;
}

float media (float * vetor, int tamanho){
    float soma=0.f;
    int i;
    for (i=0; i<tamanho; i++)
        soma = soma + vetor[i];
    return soma/tamanho;
}

float MostraMaior (float * vetor,int tamanho){
    int i, aux;
    aux=vetor[0];
    for(i=1; i<tamanho; i++)
        if (vetor[i]>=aux)
            aux=vetor[i];
    return aux;
}

float MostraMenor (float * vetor, int tamanho){
    int i, aux;
    aux=vetor[0];
    for(i=1; i<tamanho; i++)
        if (vetor[i]<=aux)
            aux=vetor[i];
    return aux;
}
