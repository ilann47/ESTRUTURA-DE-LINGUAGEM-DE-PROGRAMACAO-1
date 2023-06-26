/*
21) Deseja-se fazer um programa que calcule a nota final (média) de cada aluno,
matriculado em cada disciplina oferecida pela Universidade. Não se sabe quantos
alunos estão matriculados em cada disciplina e nem quantas disciplinas existem. No
entanto, sabe-se que em cada lista contém: o código da disciplina, o RA de cada aluno
matriculado na mesma e suas respectivas notas das avaliações realizadas. O último
aluno da lista, possui RA igual a zero, indicando que não existem mais alunos
matriculados naquela disciplina, não devendo, portando ser considerado. A última
lista possui código da disciplina igual a zero, indicando que não há mais disciplinas,
a qual também não pode ser considerado.
Pede-se que o programa deva:
a) qual a maior média e quem a conseguiu em cada disciplina; ///////
b) qual a média global de cada disciplina;      /////////////
c) quantos alunos tiraram nota final entre 6.0 e 8.0 em cada disciplina; ////////////
d) qual o percentual de aprovação em cada disciplina, sabendo que a nota final  ////////
mínima necessária para aprovação é 6.0   ////////
e) qual disciplina da Universidade obteve maior média global /////////////// e qual mais reprovou
(faça isso sem usar um contador extra);  /////////
Para efeito de simplificação considere que todas as disciplinas têm o mesmo critério
de avaliação: 2 avaliações com peso 1.
OBS.: Este é mais um problema de quebra de nível 
*/



/*
ae (CodigoDisciplina, Ra, Nota1, Nota2)
as ( MaiorMedia, QuemMaiorMedia, MediaGlobal, Alunos6080, PercentualAprovados, Aprovados, Reprovados DisciplinaMaiorMediaGlobal, DisciplinaMaisReprovou)
*/


#include <stdio.h>

void main()
{
    int CodigoDisciplina, Ra, QuemMaiorMedia, Alunos6080, Aprovados, Reprovados, DisciplinaMaisReprovou, QntdAlunos;
    float MaiorMedia, MediaGlobal, PercentualAprovados, Nota1, Nota2, Media, MaiorMediaGlobal;

    scanf("%d", &CodigoDisciplina);
    while ( CodigoDisciplina > 0 )
    {   
        Media = 0;
        Alunos6080 = 0;
        Reprovados = 0;
        scanf("%d", &Ra);
        while ( Ra > 0 )
        {
            QntdAlunos++;
            scanf("%f", &Nota1);
            scanf("%f", &Nota2);
            Media = (Nota1 + Nota2) / 2;
            MediaGlobal += Media;
            if ( Media > MaiorMedia )
            {
                MaiorMedia = Media;
                QuemMaiorMedia = Ra;
            }
            if (( Alunos6080 >= 60 ) && ( Alunos6080 <= 80))
            {
                Alunos6080++;
            }
            if ( Media > 60 )
            {
                Aprovados++;
            }
            else
            {
                Reprovados++;
            }
            PercentualAprovados = ( Aprovados / QntdAlunos ) * 100;
            scanf("%d", &Ra);
        }
        if ( Reprovados > DisciplinaMaisReprovou)
        {
            DisciplinaMaisReprovou = CodigoDisciplina;
        }
        MediaGlobal =  ( MediaGlobal / QntdAlunos );
        if (MediaGlobal > MaiorMediaGlobal)
        {
            MaiorMediaGlobal = MediaGlobal;
            QuemMaiorMedia = CodigoDisciplina;
        }
        printf("Maior Media: %f, do aluno: %d", MaiorMedia, QuemMaiorMedia);
        printf("Media global dessa disciplina: %f", MediaGlobal);
        printf("Quantidade de alunos que tiraram notas entre 60 e 80: %d", Alunos6080);
        printf("Percentual de aprovação nessa disciplina: %f %%", PercentualAprovados);
        scanf("%d", &CodigoDisciplina);
    }
    printf("A disciplina que mais reprovou foi: %d, A que obteve Maior Media Global foi: %d", CodigoDisciplina, QuemMaiorMedia);
    


}