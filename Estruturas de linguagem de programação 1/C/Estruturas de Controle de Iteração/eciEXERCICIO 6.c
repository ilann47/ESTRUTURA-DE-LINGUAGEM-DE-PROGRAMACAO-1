/*
6) Tem-se um conjunto de dados contendo a altura e o sexo (M ou F) de um número
indeterminado de pessoas, a última altura da lista tem valor zero, indicando que o
conjunto de dados terminou, e não deve ser considerada. Faça um algoritmo que
calcule e informe:
a) a maior e a menor altura do grupo;
b) a média de altura das mulheres;
c) o número de homens;
d) qual a menor altura entre os homens; 
*/


#include <stdio.h>
#include <math.h>

void main()
{
    int ind = 1, homens = 0, mulheres = 0;
    float altura = 0, maiorA= 0, menorA= 9999999, soma = 0, media = 0, menorAHomem = 9999999;
    char sexo;
    printf("\n    Qual e a altura do individuo %i ?: \n", ind);
    scanf("%f", &altura);
    while( altura > 0 )
    {
        if(altura>maiorA)
            maiorA = altura;
        if(altura<menorA)
            menorA = altura;
        ind += 1;
        printf("\n    Qual e o sexo deste individuo?\n    M para mulher | H para homem\n");
        getchar ();
        scanf("%c", &sexo);
        if (sexo == 'M' || sexo == 'm')
        {
            mulheres++;
            soma += altura;
        }
        else if (sexo == 'H' || sexo == 'h')
        {
            homens++;
            if(altura<menorAHomem)
                menorAHomem = altura;
        }
        printf("\n    Qual e a altura do individuo %i ?: \n", ind);
        scanf("%f", &altura);

    }
    media = soma/mulheres;
    printf("\n\n    A maior altura do grupo e: %f\n    A menor Altura do grupo e: %f\n    A media da altura das mulheres e: %f \n    A quantidade de homens e: %i\n", maiorA, menorA, media, homens);
    printf("    A menor altura entre os homens e de: %f", menorAHomem);
    printf("\n\n            END\n\n");
    
    
    
}