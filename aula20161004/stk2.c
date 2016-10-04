#include <stdio.h>
#include <math.h>

float media (float num1, float num2, float num3, float num4, float num5);
float Desvio_padrao (float num1, float num2, float num3, float num4, float num5, float Media);

int main (){
    float num1, num2, num3, num4, num5, Media, Desvio;
    printf("Entre com os numeros 5 numeros: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
    scanf("%f", &num5);
    Media = media (num1,num2, num3, num4, num5);
    Desvio= Desvio_padrao (num1,num2, num3, num4, num5, Media);
    printf("\nMedia dos valores: %g", Media);
    printf("\nDesvio padrao: %g", Desvio);
    return 0;
}

float media (float num1, float num2, float num3, float num4, float num5)
{
  float M;
  M = (num1+num2+num3+num4+num5)/5;
  return M;
}

float Desvio_padrao (float num1, float num2, float num3, float num4, float num5, float Media)
{
    float Desvio;
    Desvio = sqrt( (1/4)*(pow(num1-Media,2)+pow(num2-Media,2)+pow(num3-Media,2)+pow(num4-Media,2)+pow(num5-Media,2)) );
    return Desvio;
}
