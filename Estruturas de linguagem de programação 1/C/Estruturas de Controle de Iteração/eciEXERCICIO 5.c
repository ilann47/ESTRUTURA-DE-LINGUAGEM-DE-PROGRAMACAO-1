/*
5) Foram coletadas 100 medidas de altura (estatura) juntamente com o sexo de um grupo
de pessoas. Calcule:
a) a maior e a menor altura do grupo;
b) média de altura das mulheres;
c) o número de homens. 
*/




#include <stdio.h>
#include <math.h>

void main()
{
    float altura = 0, maiorA, menorA = 99999999999999999999999,  mediaM = 0, soma = 0;
    int homens = 0, mulheres = 0, i;
    char sexo;

    for (i=1;i<=100;i++)
    {
        printf("\nQual e a altura do individuo N' %i ? \n", i);
        scanf("%f", &altura);
        printf("\nDefina o genero do individio anterior: \nH para homem, M para mulher: ");
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
        }
        if (altura>maiorA)
        {
            maiorA = altura;
        }
        if (altura<menorA)
        {
            menorA = altura;
        }

    }
    mediaM = soma/mulheres;
    printf("A quantidade de homens e de: %i\n", homens);
    printf("A media de altura das mulheres e de: %f\n", mediaM);
    printf("A maior altura e de: %f\nA menor altura e de: %f\n", maiorA, menorA);  

}