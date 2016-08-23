#include <stdio.h>
#include <time.h>
int main () {
    srand(time(0));
    int num, x, cont=0, tentativa=0;
    x = rand ()%99+1;
    do{
        printf("\nDigite um numero para adivinhar: ");
        scanf("%d", &num);
        if (num<x)
            printf("\n Baixo! ");
        if (num>x)
            printf("\n Alto! ");
        if (num==x){
            printf("\n Acertou! ");
            cont++;
        }
        tentativa++;
    }while(cont!=1);
    printf("O numero de tentativas foi: %d", tentativa);
    return 0;
}
