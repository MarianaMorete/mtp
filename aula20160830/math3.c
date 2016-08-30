#include <stdio.h>
#include <math.h>
int main (){
    float num, base, logaritimo;
    printf("Digite o numero: ");
    scanf("%f", &num);
    printf("Digite a base desejada: ");
    scanf("%f", &base);
    logaritimo= log10(num)/log10(base);
    printf("O log de %f, na base %f eh igual a: %f", num, base, logaritimo);
    return 0;
}

