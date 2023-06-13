/*
8) Fornecido o valor de X calcule o valor de S usando
S = 2X/1! - 4X/2! + 6X/3! - 8X/4! + 10X/5! 
*/





#include <stdio.h>
#include <math.h>



/*ae(x)as(S)*/
int main (void)

{
    float x, S;
    printf("Entre com o valor de X para poder calcular o Valor de S: ");
    scanf("%F", &x);
    S = 2*x/(1)-4*x/(1*2)+6*x/(1*2*3)-8*x/(1*2*3*4)+10*x/(1*2*3*4*5);
    printf("O Valor de S e de: %.2F", S);
    
    return 0;
}