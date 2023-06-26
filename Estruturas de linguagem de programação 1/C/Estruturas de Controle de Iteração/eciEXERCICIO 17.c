/*
17) A Universidade deseja fazer um levantamento a respeito do seu concurso de
vestibular. Para tanto criou uma lista contendo: código DO CURSO(inteiro), Nº DE
VAGAS NO CURSO, Nº CANDIDATOS inscritos e Nº DE CANDIDATAS
inscritas, para cada curso mantido pela Universidade. Faça um algoritmo que calcule
e escreva:
a) qual a quantidade de cursos mantidos pela Universidade;
b) qual o total de inscritos para o vestibular;
c) qual o número de candidatos por vaga em cada curso;
d) qual a % de candidatas em cada curso;
e) qual curso tem maior concorrência por vaga oferecida. 
*/




/*
    ae(codigoCurso, QntdVagas, QntdCandidatos, QntdCandidatas)
*/
#include <stdio.h>
#include <math.h>

void main()
{
    int codigoCurso, qntdCursos, QntdVagas, QntdCandidatos, QntdCandidatas, CandidatosVaga, CursoMaiorConcorrencia, totalinscritos, MaiorCandidatosVaga, codigoCursoMaiorConcorrencia;
    float percentualCandidatas;
    printf("Qual e o codido da primeira universidade da lista?: \n ");
    scanf("%d", &codigoCurso);
    while ( codigoCurso > 0 )
    {
        qntdCursos++;
        printf("Qual e a quantidade de candidatos homens desse curso?: \n");
        scanf("%d", &QntdCandidatos);
        printf("Qual e a quantidade de candidatas mulheres desse curso?: \n");
        scanf("%d", &QntdCandidatas);
        totalinscritos += QntdCandidatas + QntdCandidatos;
        printf("Quantas vagas disponiveis esse curso contem?: \n");
        scanf("%d", &QntdVagas);
        CandidatosVaga = QntdCandidatos / QntdVagas;
        printf("Quantidade de candidatos por vaga: %d\n", CandidatosVaga);
        if (CandidatosVaga > MaiorCandidatosVaga)
        {
            MaiorCandidatosVaga = CandidatosVaga;
            codigoCursoMaiorConcorrencia = codigoCurso;
        }
        percentualCandidatas = (QntdCandidatas / totalinscritos) * 100;
        printf("Percentual de Candidatas para a vaga desse curso: %.2f%%\n", percentualCandidatas);
        printf("\nQual e o codido da universidade?. \n ");
        scanf("%d", &codigoCurso);

    }
    printf("Quantiade de cursos que pertencem a esta Universidade: %d\n", qntdCursos);
    printf("Total de Inscritos: %d\n", totalinscritos);
    printf("O curso mais concorrido e: %d, com %d Candidatos por vaga.\n", codigoCursoMaiorConcorrencia, MaiorCandidatosVaga);
    
}