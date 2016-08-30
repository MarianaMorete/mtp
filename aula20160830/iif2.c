#include <stdio.h>
#include <math.h>
int main(){
    int num, i;
    double fat=1;
    printf("Digite o numero para fazer seu fatorial: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fat=fat*i;
    }
    printf("O fatorial de %d eh:\n %f", num, fat);
    return 0;
}
