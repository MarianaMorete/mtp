#include <stdio.h>
int main () {
    int num, fat=1, i;
    printf("Digite um numero para fazer o fatorial: ");
    scanf("%d", &num);
    for (i=1; i<=num; i++)
    {
        fat=fat*i;
    }
    printf ("\n O fatorial do numero digitado e: %d", fat);
    return 0;
}
