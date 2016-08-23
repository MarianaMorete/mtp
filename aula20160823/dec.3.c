#include <stdio.h>
#include <time.h>
int main () {
    srand(time(0));
    int A, B, C, soma;
    A = rand ()%6+1;
    B = rand ()%6+1;
    C = rand ()%6+1;
    soma = A+B+C;
    printf("Dado 1: %d", A);
    printf("\nDado 2: %d", B);
    printf("\nDado 3: %d", C);
    printf("\nA soma dos dados foi: %d", soma);
    if (soma==7 || soma==11)
        printf(" \n Ganhou!");
    else
        printf("\n Perdeu!");
    return 0;
}
