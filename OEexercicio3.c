/*
3) Fornecido o raio de um circulo, calcular a sua área, seu perímetro e o seu
diâmetro.
*/



#include <stdio.h>
#include <math.h>


/*ae(raio)as(area, perimetro, diametro */
int main()
{
    float area, perimetro, diametro, raio;
    printf("Entre com o raio para calcular o circulo desejado ");
    scanf("%f", &raio);
    area = 3.14 * pow(raio,2);
    perimetro = 2 * 3.14 * raio;
    diametro = 2 * raio;
    printf("A area e: %.2F O perimetro e: %.2F O diametro e: %.2F", area, perimetro, diametro);
    
return 0;
}