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
