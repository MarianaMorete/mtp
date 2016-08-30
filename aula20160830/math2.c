#include <stdio.h>
#include <math.h>
int main (){
    float lado_b, lado_c, angulo, lado_a;
    printf("Digite um dos lados do triangulo: ");
    scanf("%f", &lado_b);
    printf("Digite o outro lado do quadrado: ");
    scanf("%f", &lado_c);
    printf("Digite o angulo entre os lados em radianos: ");
    scanf("%f", &angulo);
    lado_a=sqrt(pow(lado_b,2)+pow(lado_c,2)-2*lado_b*lado_c*cos(angulo));
    printf("O terceiro lado dotriangulo eh: %f", lado_a);
    return 0;
}

