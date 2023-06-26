/*
18) O sistema de avaliação de uma determinada disciplina, é feita através da realização
de 3 avaliações. A nota final é obtida calculando-se a média aritmética simples entre
as notas das avaliações. Será aprovado o aluno que obter nota final igual ou superior
a 6.0. As notas de cada aluno estão disposta numa lista, juntamente com seu registro
acadêmico:
 R.A. NOTA1 NOTA2 NOTA3
Faça um programa que calcule:
a) a Nota Final de cada aluno;
b) o total de alunos reprovados;
c) a média da turma;
d) de quem é a maior e a menor nota final da turma.
*** o número total de alunos é desconhecido
*/


#include <stdio.h>


void main()

{
    int RA, aluno = 1;
    float NOTA1 , NOTA2, NOTA3, NotaFinalAluno, AlunosReprovados, MediaTurma, MaiorNotaTurma = -9999, MenorNotaTurma = 9999, NotaFinalTurma;

    printf("Qual e o RA do aluno 1?: \n");
    scanf("%d", &RA);
    while ( RA > 0 )
    {   
        
        printf("Qual e a 1 nota do aluno?: \n");
        scanf("%d", &NOTA1);    
        printf("Qual e a 2 nota do aluno?: \n");
        scanf("%d", &NOTA2);       
        printf("Qual e a 3 nota do aluno?: \n");
        scanf("%d", &NOTA3);
        NotaFinalAluno = (NOTA1+NOTA2+NOTA3) / 3;
        NotaFinalTurma += NotaFinalAluno;
        if ( NotaFinalAluno < 60 )
            AlunosReprovados++;
        

        if ( NotaFinalAluno > MaiorNotaTurma )
            MaiorNotaTurma = NotaFinalAluno;

        if ( NotaFinalAluno < MenorNotaTurma )
            MenorNotaTurma = NotaFinalAluno;


        printf("Nota Final desse aluno: %d", NotaFinalAluno);
        aluno++;
        printf("Qual e o RA do aluno %d?: \n", aluno);
        scanf("%d", RA);
    }
    MediaTurma = NotaFinalTurma / aluno;
    printf("Total de alunos reprovado: %d", AlunosReprovados);
    printf("Media da turma de %d alunos e de: %d", aluno, MediaTurma);
    printf("Maior Nota da Turma: %d ", MaiorNotaTurma);
    printf("Menor Nota da Turma: %d ", MenorNotaTurma);
    
}

