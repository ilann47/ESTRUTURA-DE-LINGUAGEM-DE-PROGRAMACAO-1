/*
6) Ao serem fornecidos um valor a ser pago e uma taxa de juros de multa,
calcule o valor da multa e o valor total a ser pago. 
*/






#include <stdio.h>
#include <math.h>

int main(void)
/* ae(ValorAserpago, TaxadeJurosdeMulta) as(valordaMulta, ValorTotalAPagar) */
{
    float ValorAserPago, TaxadeJurosdeMulta, ValordaMulta, ValorTotalAPagar;
    printf("Ditite o Valor a ser pago: ");
    scanf("%f", &ValorAserPago);
    printf("Digite o percentual da taxa de juros da multa: ");
    scanf("%F", &TaxadeJurosdeMulta);
    ValordaMulta = ValorAserPago * TaxadeJurosdeMulta / 100;
    ValorTotalAPagar = ValorAserPago + ValordaMulta;
    printf("O valor da Multa: %.2f Portanto o Valor Total A ser pago sera de: %.2f", ValordaMulta, ValorTotalAPagar);
    
 
    
return 0;
}