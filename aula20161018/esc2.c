#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    srand(time(NULL));
    int nnumeros;
    printf("Entre com a quantidade de numeros aleatorios que deseja gerar: ");
    scanf("%d", &nnumeros);
    geraNumeros (nnumeros);

    return 0;
}

void geraNumeros (int nnumeros){
    int i;
    FILE * arquivo;
    arquivo = fopen("Numeros.txt","w");
    for (i=0; i<nnumeros; i++)
        fprintf(arquivo, "%d\n", rand()%100);
    fclose(arquivo);
}
