#include <stdio.h>
#include <time.h>
int main (){
    srand(time(0));
    int num, i, aux;
    int vetor[1000];
    printf("Entre com um numeros de 1 a 1000: ");
    scanf("%d", &num);
    for (i=0; i<num; i++){
        vetor[i]= rand() %(num+1);
        }
    for (i=0; i<num; i++){
        if (vetor[i]>vetor[i+1])
            aux=vetor[i];
    }
    printf("\nO maior lemento do vetor e: %d", aux);
    return 0;
}

