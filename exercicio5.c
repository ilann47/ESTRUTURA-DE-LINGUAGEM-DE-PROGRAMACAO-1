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