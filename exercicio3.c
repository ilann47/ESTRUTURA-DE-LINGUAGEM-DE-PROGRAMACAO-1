#include <stdio.h>
#include <math.h>



/*ae(raio)as(area, perimetro, diametro */
int main()
{
    float circunferencia, area, perimetro, diametro, raio;
    printf("Entre com o raio para calcular o circulo desejado ");
    scanf("%f", &raio);
    area = M_PI * pow(raio,2);
    perimetro = 2 * M_PI * raio;
    diametro = 2 * raio;
    printf("A area e: %.2F O perimetro e: %.2F O diametro e: %.2F", area, perimetro, diametro);
    
return 0;
}