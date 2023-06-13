/*
1) Fornecido o valor de um dos lados de um quadrado, calcule a sua área e
perímetro. 
*/



#include <stdio.h>

/*ae(lado)as(area, perimetro)*/
void main()
{
    float lado= 0, area= 0, perimetro= 0;
    printf("Entre com o lado: ");
    scanf("%f", &lado);
    area= lado * lado;
    perimetro= area * 4;
    printf("A area eh: %.2f  O perimetro e: %.2f", area, perimetro);

}