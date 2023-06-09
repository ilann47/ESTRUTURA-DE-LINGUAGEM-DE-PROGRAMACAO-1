/*4) Um funcionário ganha R reais por hora normal trabalhada. Sabendo-se que a jornada
normal de trabalho é de 40 horas/semana e que o mesmo ganha 50% a mais sobre o
valor da hora normal, por hora extra trabalhada.
Ao serem fornecidos o valor da hora normal e a quantidade de horas trabalhada na
semana, calcule: o salário normal semanal, o salário extra e o salário bruto do
funcionário. 
*/








#include <stdio.h>
#include <math.h>
void main()
{
    float SalarioSemana, Salario, salarioEx, salarioBr, QntdHr, QntdHrEx, ValorHr;
    printf("Qual e o valor da hora trabalhada?: ");
    scanf("%f", &ValorHr);
    printf("Quantas horas o funcionario trabalhou na semana?(Incluindo as horas extras): ");
    scanf("%F", &QntdHr);
    if(QntdHr<=40)
        {
            SalarioSemana= ValorHr*QntdHr;
        }
    else if(QntdHr>=40)
        {
            SalarioSemana= ValorHr*40;
            QntdHrEx= QntdHr-40;
            salarioEx=(QntdHrEx*ValorHr)*1.5;
        }
    salarioBr= SalarioSemana  +   salarioEx;
    printf("O Salario normal do funcionario e de: R$%.2f \n", SalarioSemana);
    printf("O Salario extra do Funcionario pelas horas extras sera de: R$%2.f \n", salarioEx);
    printf("O Salario Bruto Final do funcionario sera de: R$%.2f \n", salarioBr);
}