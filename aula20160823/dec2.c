#include <stdio.h>
#include <time.h>
int main () {
    srand(time(0));
    int num, soma;
    printf("Favor entrar com o numero inteiro positivo: ");
    scanf ("%d", &num);
    soma = num + rand()%(1+1);
    printf ("soma %d\n", soma);
    if (soma%2==0)
        printf ("A soma do numero e par.");
    else
        printf ("a soma do numero e impar");
    return 0;
}
