/*
16) A empresa Cara de Pau Ltda. resolveu fazer uma pesquisa de mercado,
abrangendo o maior número de pessoas possível, para saber se as pessoas estão
gostando ou não de um novo produto lançado no mercado, coletando o sexo(M,F), a
idade e uma resposta(S=sim, N=não) de cada entrevistado. Faça um algoritmo que
calcule:
a) quantas pessoas foram entrevistadas;
b) quantas pessoas disseram sim;
c) quantas pessoas disseram não;
d) o percentual de pessoas que disseram sim;
e) quantas mulheres disseram sim;
f) quantos homens disseram não;
g) quantos homens até 23 anos disseram sim;
h) quantas mulheres até 23 anos disseram não;
**** adote flag adequado
*/




#include <stdio.h>
#include <math.h>

void main()
{
    float percentual = 0;
    int entrevistados = 0, pessoas = 0, sim = 0, nao = 0, pessoa = 0, mulhersim = 0, homemnao = 0,  idade, homemsim23 = 0, mulhernao23 = 0;
    char SimNao, sexo;
    printf("\nQual a quantidade de pessoas que foram entrevistadas? \n");
    scanf("%i", &entrevistados);
    printf ("\n");

    while ( pessoas < entrevistados )
    {
        printf("O entrevistado N: %i gostou do nosso ultimo produto lancado? (S ou N)\n", pessoas);
        getchar();
        scanf("%c", &SimNao);
        printf("O entrevistado e homem ou mulher? (H ou M)\n");
        getchar();
        scanf("%c", &sexo);
        printf("Qual a idade dessa pessoa? \n");
        scanf("%i", &idade);
        printf ("\n");

        if (SimNao == 's' || SimNao == 'S') {
            sim++;
            if (sexo == 'm' || sexo == 'M') {
                mulhersim++;
            }
        }

        else if (SimNao == 'n' || SimNao == 'N') {
            nao++;
            if (sexo == 'h' || sexo == 'H') {
                homemnao++;
            }
        }

        if ((SimNao == 's' || SimNao == 'S') && (sexo == 'h' || sexo == 'H') && (idade <= 23)) {
            homemsim23++;
        }

        if ((SimNao == 'n' || SimNao == 'N') && (sexo == 'm' || sexo == 'M') && (idade <= 23)) {
            mulhernao23++;
        }
        
        pessoas ++;
    }

    percentual = (sim / (float)entrevistados) * 100;
    
    printf("\nO total de pessoas que disseram sim foi: %i", sim);
    printf("\nO total de pessoas que disseram nao foi: %i", nao);
    printf("\nO total de mulheres que disseram sim foi: %i", mulhersim);
    printf("\nO total de homens que disseram nao foi: %i", homemnao);
    printf("\nTotal de homens de ate 23 anos que disseram sim: %i", homemsim23);
    printf("\nTotal de mulheres de ate 23 anos que disseram nao: %i", mulhernao23);
    printf("\no Percentual de pessoas que disseram sim foi: %f", percentual);  
}