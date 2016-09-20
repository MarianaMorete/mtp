#include <stdio.h>
#include <time.h>

int main (){
    srand(time(0));
    int num, sorteado;
    sorteado = (rand()%10)+1;
    printf("Digite um numero de 1 a 10: ");
    scanf("%d", num);
    printf("Sorteado: %d\n", sorteado);
        compara(num, sorteado);
    return 0;
}

int compara(int num, int sorteado){
    if(num == sorteado)
        printf("Parabens!!!\n");
    return 0;
}

