#include <stdio.h>
#include <math.h>
int main (){
    float x1, y1, x2, y2, d;
    printf("Digite a coordenada x do primeiro ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do primeiro ponto: ");
    scanf("%f", &y1);
    printf("Digite a coordenada x do segundo ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do segundo ponto: ");
    scanf("%f", &y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("A distncia entre os pontos eh: %f", d);
    return 0;
}
