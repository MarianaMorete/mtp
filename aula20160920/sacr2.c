#include <stdio.h>
#include <time.h>

int lanca_dado ();

int main (){
    srand(time(0));
    int soma, tentativa=1;
    do{
    soma = lanca_dado();
    if (soma>=21){
        printf("\n Ganhou! Soma dos dados: %d", soma);
        tentativa = 4;
    }
    else{
        printf("\n Perdeu! Soma dos dados: %d", soma);
        tentativa++;
    }
    } while (tentativa<=3);
    printf("\n");
    return 0;
}

int lanca_dado (){
    int soma=0, i;
    for(i=0; i<=5; i++)
        soma = soma + (rand()%6)+1;
    return soma;
}
