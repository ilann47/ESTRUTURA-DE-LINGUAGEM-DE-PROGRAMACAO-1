/*3) Uma empresa decide dar um aumento de 30% aos funcionários com salário inferiores
a R$ 500,00. Faça um programa que receba o salário do funcionário e mostre o valor do
salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento. 
*/






#include <stdio.h>
#include <math.h>
void main()
{
    float Salario, aumento, reajuste;
    printf("Qual o Valor do salario do funcionario?: ");
    scanf("%f", &Salario);
    if(Salario<500)
        {
            reajuste= Salario*0.30;
            aumento= Salario+reajuste;
            printf("O salario do funcionario apos o reajuste sera de: %2.f", aumento);
        }
    else
        {
            printf("O Funcionario nao tem direito ao aumento");
        }

}