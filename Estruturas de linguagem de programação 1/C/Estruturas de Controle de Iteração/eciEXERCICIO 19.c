












/*
19) Em uma empresa, não se sabe quantos setores a compõe e nem quantos funcionários
trabalham em cada setor. O diretor, resolveu fazer um levantamento de
funcionários e salários em cada setor. No final do levantamento, 
obteve-se uma série de listas contendo, no topo de cada lista, 
o código do setor e a seguir, o número de matrícula, o salário e o nome de cada
funcionário, referentes àquele setor. No final de cada lista o número de 
matrícula do funcionário é 0, indicando que naquele setor não existem
mais funcionários, e nas próximas listas ocorre o mesmo fato, exceto na última lista
que contém o número do setor igual a 0, indicando que não existem mais setores na
empresa.
Faça um algoritmo que calcule:
a) quantos setores existem na empresa; /////////////
b) quantos funcionários trabalham na empresa;  //////////////
c) qual o montante total de salários pagos pela empresa; //////////////
d) quantos funcionários trabalham em cada setor da empresa; ///////////////
e) qual o montante de salários pagos pela empresa em cada setor; ////////////
f) qual o funcionário que recebe o maior salário em cada setor; ////////////
g) qual setor gasta mais em salários;  //////////////
Sugestão: crie dois laços, um dentro do outro, o 1º controlando os setores e o 2º
controlando os funcionários de cada setor. 
*/

/*
    ae(CodigoSetor, Matricula, Salario, Nome) 
    as(QntdSetores, QntdFuncionarios, MontanteTotalSalario, QntdFuncionarioSetor, MontanteSalarioSetor, FuncionarioMaiorSalarioSetor, SetorMaisCaro)
*/


// ainda bem que eu sei ler ierogrofo
#include <stdio.h>

void main()
{

    int CodigoSetor = 0,  QntdSetores = 0, Matricula = 0, QntdFuncionarios = 0, QntdFuncionarioSetor = 0, qualsetormaiscaro = 0;
    float Salario = 0, MontanteTotalSalario = 0, MontanteSalarioSetor = 0, MaiorSalarioSetor = -9999, SetorMaisCaro = -9999;
    char Nome[50], NomedoMaiorSalario[50];
    QntdSetores = 1;
    printf("\n\n\nCONSIDERE NESTE PROGRAMA AS CONDICOES DE PARADA DO PROGRAMA PARA SETOR DE EMPRESA E MATRICULA DO FUNCIONARIO COMO 0;\n\n\n");
    printf("Qual e o Codigo do Setor %d Da empresa?: \n", QntdSetores);
    scanf("%d", &CodigoSetor);
    while ( CodigoSetor > 0 )
    {


        
        printf("Qual e o Numero de Matricula do Funcionario 1 desse setor?: \n");
        scanf("%d", &Matricula);
        QntdFuncionarioSetor = 1;
        MontanteSalarioSetor = 0;
        while ( Matricula > 0 )
        {
            
            printf("Qual e o Salario desse funcionario?: \n");
            scanf("%f", &Salario);

            printf("Qual e o nome do funcionario?: \n");
            scanf(" %s", Nome);
            if ( Salario > MaiorSalarioSetor ) // f 
            {
                MaiorSalarioSetor = Salario; 
                strcpy(NomedoMaiorSalario, Nome);
            }            


            MontanteSalarioSetor += Salario; // e
            MontanteTotalSalario += Salario; // c

            QntdFuncionarioSetor++;
            QntdFuncionarios++; // b)            
            printf("Qual e o Numero de Matricula do Funcionario %d desse setor?: \n", QntdFuncionarioSetor);
            scanf("%d", &Matricula);
        }
        

        if ( MontanteSalarioSetor > SetorMaisCaro ) //  g
        {
            SetorMaisCaro = MontanteSalarioSetor;
            qualsetormaiscaro = QntdSetores;
        }

        printf("\n O funcionario que recebe o maior salario desse setor e %s, recebendo: %.2f", NomedoMaiorSalario, MaiorSalarioSetor); // f
        printf("\n A quantidade de funcionarios desse setor e de: %d", (QntdFuncionarioSetor-1)); // d
        printf("\n O Montante de Salarios pagos nesse setor e de: %.2f", MontanteSalarioSetor); // e

        QntdSetores++;  // a)
        printf("\n Qual e o Codigo do Setor %d Da empresa?: \n", QntdSetores);
        scanf("%d", &CodigoSetor);
    }
    printf("\n o Setor que mais gasta e o Setor: %d Com um montante de: %.2f", qualsetormaiscaro, SetorMaisCaro); // g
    printf("\n O montante de salarios pago pela empresa e de: %.2f", MontanteTotalSalario); // c
    printf("\n Existem %d Setores na empresa", (QntdSetores-1)); // a
    printf("\n Quantidade de funcionarios que trabalham na empresa: %d", QntdFuncionarios); // b

    
    
}