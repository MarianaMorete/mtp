#include <stdio.h>
int main () {
    int B, P, potencia, i;
    printf("Digite o valor da base: ");
    scanf("%d", &B);
    printf("Digite o valor da potencia: ");
    scanf("%d", &P);
    potencia=B;
    for (i=1; i<P; i++)
    {
        potencia=potencia*B;
    }
    printf ("\n O resultado da operacao e: %d", potencia);
    return 0;
}
