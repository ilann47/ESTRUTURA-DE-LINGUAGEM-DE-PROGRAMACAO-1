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
#include <math.h>

void main()
{

    int RA, aluno = 1, alunoreprovado = 0, AlunoMenorNota, AlunoMaiorNota;
    float Nota1, Nota2, Nota3, MediaTurma, MaiorNota = -999, MenorNota= 9999, NotaFinalAluno, NotaFinalAlunoTurma;
    printf("\nQual o RA do aluno 1 ?: \n");
    scanf("%d", &RA);
    while (RA > 0)
    {
        printf("\nQual e a primeira nota desse aluno?: \n");
        scanf("%f", &Nota1);
        printf("\nQual e a segunda nota desse aluno?: \n");
        scanf("%f", &Nota2);
        printf("\nQual e a terceira nota desse aluno?: \n");
        scanf("%f", &Nota3);
        NotaFinalAluno = (Nota1 + Nota2 + Nota3) / 3;
        NotaFinalAlunoTurma += NotaFinalAluno;

        if ( NotaFinalAluno < 60 )
            alunoreprovado++;


        if ( NotaFinalAluno > MaiorNota )
        {
            MaiorNota = NotaFinalAluno;
            AlunoMaiorNota = RA;
        }
        if ( NotaFinalAluno < MenorNota )
        { 
            MenorNota = NotaFinalAluno;
            AlunoMenorNota = RA;
        }

        printf("\nA nota final desse aluno foi: %f\n", NotaFinalAluno);


        aluno++;
        printf("\nQual o RA do aluno %d ?: \n", aluno);
        scanf("%d", &RA);
    }
    MediaTurma = NotaFinalAlunoTurma / aluno;
    printf("\n\nO total de alunos reprovados foi de: %d", alunoreprovado);
    printf("\nA media de notas da Turma de %d alunos foi de: %f", (aluno-1), MediaTurma);
    printf("\nA MAIOR nota da turma foi do aluno com RA: %d Nota: %f", AlunoMaiorNota, MaiorNota);
    printf("\nA MENOR nota da turma foi do aluno com RA: %d Nota: %f", AlunoMenorNota, MenorNota);
}