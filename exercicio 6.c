/*6) Numa certa loja de eletrodomésticos, o vendedor encarregado da seção de televisores
recebe, mensalmente, um salário fixo mais comissão. Esta comissão é calculada em
relação ao tipo e a quantidade de televisores vendidos por mês, obedecendo a
seguinte tabela:

Eletrodoméstico NÚMERO DE APARELHOS VENDIDOS
COMISSÃO (R$) / por APARELHOS VENDIDOS
TV LCD até 10   50,00
mais de 10  100,00
TV LED até 20  20,00
mais de 20 40,00
Sobre o seu salário fixo há um desconto de 10% referente ao INSS. Caso o seu
salário bruto exceda à R$ 100,00 haverá desconto de imposto de renda, segunda a
tabela abaixo, aplicada sobre o valor excedente à R$ 100,00.
FAIXA SALARIAL ALÍQUOTA (%)
até 100,00 isento
de 100,01 até 150,00 10%
mais de 150,00 15%

calcule:
a) a comissão do funcionário;
b) o salário bruto do funcionário;
c) os valores de cada desconto;
d) o total dos descontos;
e) o salário líquido. 
*/






#include <stdio.h>
#include <math.h>
int main()
{
    float Salario, comissao, comissaoLED, comissaoLCD, SalarioBr, INSS, IR;
    int LCD, LED;
    printf("Qual e o salario fixo do Funcionario? ");
    scanf("%f", &Salario);
    printf("Quantas TVs LCD foram vendidas?");
    scanf("%d", &LCD);
    printf("Quantas TVs LED foram vendidas?");
    scanf("%d", &LED);

    if(LCD<=10)
        {
            comissaoLCD = LCD*50;        
        }
    else
        {
            comissaoLCD = LCD*100;
        }
    if(LED<=20)
        {
            comissaoLED = LED*20;
        }
    else
        {
            comissaoLED = LED*40;  
        }
    comissao= comissaoLED+comissaoLCD;
    SalarioBr = comissao + Salario;
    INSS = Salario * 0.1;
    if(SalarioBr<=100)
        {
            IR= 0;
        }
    if(SalarioBr>100 && SalarioBr <= 150)
        {
            IR= SalarioBr * 0.1;
        }
    else
        {
            IR= SalarioBr * 0.15;
        }
    float Tdescontos= IR + INSS;
    float SalarioLiq= SalarioBr - Tdescontos;
    printf("Comissao: %.2f \n", comissao);
    printf("Salario Bruto: %.2f \n", SalarioBr);
    printf("Descontos: \n");
    printf("INSS: %.2f\n", INSS);
    printf("IR: %.2f \n", IR);
    printf("Total dos descontos: %.2f \n", Tdescontos);
    printf("Salario Liquido: %2.f \n", SalarioLiq);
    return 0;
} 