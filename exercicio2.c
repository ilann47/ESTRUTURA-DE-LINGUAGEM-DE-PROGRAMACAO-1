#include <stdio.h>
#include <math.h>


/*ae(base, altura)as(area, perimetro)*/
int main()
{
 
 float area, base, altura, hipotenusa, perimetro;
 printf("digite o valor da base do triangulo retangulo ");
 scanf("%F", &base);
 printf("Digite o valor da altura do mesmo triangulo ");
 scanf("%f", &altura);
 area = base * altura / 2;
 hipotenusa = sqrt(pow(altura,2) + pow(base,2));
 perimetro = altura + base + hipotenusa;
 printf("A area e %.2f O perimetro e %.2f", area, perimetro);
 return 0;
}