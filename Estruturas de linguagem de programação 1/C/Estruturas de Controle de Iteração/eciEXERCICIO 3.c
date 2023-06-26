/*
3) Durante os 30 dias do mês de novembro, foram tomadas as temperaturas médias diárias
de uma certa região da Antártida. Determinar o número de dias deste mês em que a
temperatura foi menor ou igual a zero e o número de dias em que a temperatura foi maior
que zero.
Determine também, a média entre as temperaturas positivas.
Os únicos dados disponíveis, são as temperaturas de cada dia. 
*/






#include <stdio.h>
#include <math.h>

void main()
{
    float Temperatura = 0, soma = 0, media = 0 ;
    int dia = 0, maiorqnt = 0, menorqnt = 0, i ;
    for ( i = 0 ; i < 30 ; i ++ )
    {
        dia++ ;
        printf ( "Qual e a temperatura do dia %i ? \n", dia ) ;
        scanf ( "%f", &Temperatura ) ;
        if ( Temperatura>0 )
        {
            maiorqnt++ ;
            soma += Temperatura ;
        }
        else if ( Temperatura<=0 ) 
            menorqnt++ ;
    }
    media = soma/maiorqnt ;
    printf(" A Quantidade de dias com temperaturas positivas foram: %i \n A quantidade de dias negativos: %i \n A media das Temperaturas positivas: %f \n", maiorqnt, menorqnt, media) ;

}