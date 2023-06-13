/*
5) Converta o valor de temperatura fornecida em graus Fahrenheit para Celcios
usando a fórmula: C = 5 / 9 (F - 32). 
*/





#include <stdio.h>
#include <math.h>



/*ae(fahrenheit)as(celcios)*/

int main(void)

{
    float fahrenheit, celcios;
    printf("Entre com o valor da temperatura em fahrenheit para a conversao desejada em celcios: ");
    scanf("%f", &fahrenheit);
    celcios= 5.0/9.0*(fahrenheit-32);
    printf("A temperatura de %f, e de %f celcios", fahrenheit, celcios);
    
 
    
return 0;
}