/*2) Fornecidos três valores descobrir qual o maior e o menor valor entre os mesmos*/






#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c;
    printf("Digite o valor de tres numeros: \n");
    scanf("%f %f %f", &a, &b, &c);
    if((a>b)&&(b>c))
        {
            printf("Maior: %.2f, Menor: %.2f", a, c);
        }
    else if((b>a)&&(a>c))
        {
            printf("Maior: %.2f, Menor: %.2f", b, c);
        }
    else if((c>a)&&(a>b))
        {
            printf("Maior: %.2f, Menor: %.2f", c, b);
        }
    else if((c>b)&&(b>a))
        {
            printf("Maior: %.2f, Menor: %.2f", c, a);
        }
    else if((b>c)&&(c>a))
        {
            printf("Maior: %.2f, Menor: %.2f", b, a);
        }
    else if((a>c)&&(c>b))
        {
            printf("Maior: %.2f, Menor: %.2f", a, b);
        }
}