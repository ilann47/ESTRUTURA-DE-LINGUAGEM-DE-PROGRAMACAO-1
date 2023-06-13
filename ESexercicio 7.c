/*
7) Na linha de montagem de uma fábrica existem 3 classes de operários:
 1 - os que montam até 30 peças por mês
 2 - os que montam de 31 até 35 peças por mês
 3 - os que montam mais de 35 peças por mês
Os operários de classe 1 ganham salário mínimo. Os da classe 2 ganham o mínimo
mais uma comissão de 3% (do salário mínimo) por peça montada acima das 30
iniciais, e os da classe 3, recebem o mínimo mais 5% por peça acima das 30 iniciais.
Calcule o salário bruto do operário, informando o valor ganho com comissão. 
*/





#include <stdio.h>
void main()
{
    char classe;
    float salario= 1300, peças;
    scanf("%f", &peças);
    if(peças<=30){
        salario+=0;
        classe = '1';
    }
    else if(peças>30 && peças<=35){
        salario*=0.03;
        classe = '2';
    }
    else {
        salario*= 0.05;
        classe = '3';
    }
    printf("A classe do funcionario se encaixa na classe: %c O Salario Bruto do Funcionario e de %.2f e a comissao ganha: %.2f", classe, salario + 1300, salario);
}
