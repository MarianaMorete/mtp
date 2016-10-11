#include <stdio.h>

void recebe(int * vet, int tamanho);
void Media (int * vet, int tamanho);
void MostraMaior (int * vet,int tamanho);
void MostraMenor (int * vet, int tamanho);

int main (){
    int n;
    int tamanho;
    int * vet;
    printf("informe a quantidade de numeros que deseja: ");
    scanf("%d", &n);
    tamanho = malloc (n*sizeof(int));
    recebe(vet, tamanho);
    return 0;
}

void recebe(int * vet, int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        printf("Entre com o numero #%d: ", i);
        scanf("%d", &vet[i]);
    }
}

void Media (int * vet, int tamanho){
    int i, soma=0;
    for(i=0; i<tamanho; i++)
        soma = soma+vet[i];
    printf("Media dos numeros: %g", soma/tamanho);
}

void MostraMaior (int * vet,int tamanho){
    int i, aux;
    aux=vet[0];
    for(i=1; i<tamanho; i++)
        if (vet[i]>=aux)
            aux=vet[i];
    printf("O maior numero digitado eh: %d", aux);
}

void MostraMenor (int * vet, int tamanho){
    int i, aux;
    aux=vet[0];
    for(i=1; i<tamanho; i++)
        if (vet[i]<=aux)
            aux=vet[i];
    printf("O menor numero digitado eh: %d", aux);
}
