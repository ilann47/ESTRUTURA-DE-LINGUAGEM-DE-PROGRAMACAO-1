/*
9) Dizemos que um número inteiro positivo é perfeito, se este número for igual à soma
dos seus divisores próprios. (Ex. 6 é perfeito, pois, 1+2+3=6.). Dado um número
natural, verificar se ele é perfeito (P), ou não-perfeito (N). 
*/





#include <stdio.h>

void main()

{
    int numero, soma, i;
    printf("Digite um numero para verificacao de sua perfeicao: \n");
    scanf("%d", &numero);

    for(i = 1; i < numero; i++)
    {
        if ((numero % i) == 0 )
            soma += i;
    }    
    if ( soma == numero )
        printf("Numero perfeito");
    else
        printf("Numero nao perfeito");
}