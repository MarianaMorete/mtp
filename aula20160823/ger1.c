#include <stdio.h>
int main () {
    int num, i, div;
    printf("Digite um numero para verificar se ele e primo: ");
    scanf("%d", &num);
    for (i=2; i<num; i++){
        if (num%i==0){
            printf("O numero nao e primo! \n");
            break;
        }
    }
    if (i == num)
        printf ("O numero e primo! \n");
    return 0;
}
