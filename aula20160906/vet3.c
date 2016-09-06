#include <stdio.h>
#define N 10
int main (){
    int numero, i;
    float soma = 0;
    float produto=1;
    int vetor[N];
    printf("Entre com os dez numeros do vetor: ");
    for (i=0; i<N; i++)
        scanf("%d", &vetor[i]);
    for (i=0; i<N; i++){
        soma = soma + vetor [i];
        produto=produto*vetor[i];
    }
    printf("A soma dos numeros do vetor e: %g\n", soma);
    printf("O produto dos numeros do vetor e: %g\n", produto);
    return 0;
}
