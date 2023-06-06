/*1) Fornecidos 2 valores descobrir qual o maior valor, e colocá-los em ordem crescente. */




#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c;
    printf("Insira o Valor de a: ");
    scanf("%f", &a);
    printf("Insira o Valor de b: ");
    scanf("%f", &b);
    if(a<b)
        {
            c=a;
            a=b;
            b=c;
        }
    printf("Os Valores inseridos agora em ordem crescente: %.2f, %.2f", a, b);
}