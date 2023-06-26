/*
4) Uma loja de calçados anota diariamente a quantidade de pares vendidos. Determinar
em que dia do mês de março ocorreu a maior venda e qual foi a quantidade de pares de
calçados vendidos nesta dia. 
*/





#include <stdio.h>
#include <math.h>

void main()
{
    int i, diam = 0, qnt = 0, maior = 0;
    for ( i=1;i<=31;i++ )
    {
        printf(" Quantos pares foram vendidos no dia %i ? \n", i);
        scanf("%i", &qnt);
        if(qnt>maior)
        {
            maior = qnt;
            diam = i;
        }
    }
    printf(" A maior quantidade de vendas no mes foi de %i e foi realizada no dia %i", maior, diam);
    
}