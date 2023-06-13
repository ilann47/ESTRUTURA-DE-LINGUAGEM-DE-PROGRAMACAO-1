/*5) Refaça o exercício 4), considerando que sobre o salário bruto do funcionário incidem
as seguintes taxas:
 a) 10% de INSS;
 b) Imposto de Renda (IR) de acordo com a seguinte tabela:
faixa salarial (R$) alíquota de desconto (%)
até 2.000,00 Isento
de 2.000,01 até 3.000,00 8 %
de 3.000,01 até 4.500,00 10 %
acima de 4.500,00 15 %
 c) Imposto Sindical 0,5%
Informe os salários parciais (vantagens), o total das vantagens, os descontos e o total
de descontos e o salário liquido do funcionário. */







#include <stdio.h>
#include <math.h>
void ilan()
{
    float SalarioSemana, Salario, salarioEx, SalarioBr, QntdHr, QntdHrEx, ValorHr, INSS, IR, ImpSind, Vantagens, SalarioLiq, Tdescontos;
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
    SalarioBr= SalarioSemana  +   salarioEx;
    printf("O Salario normal do funcionario e de: R$%.2f \n", SalarioSemana);
    printf("O Salario extra do Funcionario pelas horas extras sera de: R$%2.f \n", salarioEx);
    printf("O Salario Bruto Final do funcionario sera de: R$%.2f \n", SalarioBr);
    INSS= SalarioBr * 0.1;
    if(SalarioBr <= 2000)
        {
            IR = 0;
        }
    else if(SalarioBr <= 3000)
        {
            IR = SalarioBr*0.08;
        }
    else if(SalarioBr <= 4500)
        {
            IR = SalarioBr*0.1;
        }
    else
        {
            IR = SalarioBr*0.15;
        }
    ImpSind = SalarioBr * 0.005;
    Tdescontos = INSS + IR + ImpSind;
    SalarioLiq = SalarioBr - Tdescontos;
    printf("Descontos: \n");
    printf("INSS: R$%.2f \n", INSS);
    printf("IR: R$%.2F \n", IR);
    printf("Imposto Sindical: R$%.f\n", ImpSind);
    printf("Total dos descontos: R$%.2F \n", Tdescontos);
    printf("Salario Liquido: R$%.2F\n", SalarioLiq);
}