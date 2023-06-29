#include <stdio.h>


//ae(idade, peso, altura, sexo) as(mediaIdHomem, QntPesoSup60, AltInf160, Percent18a23, AltMedMulher, MedPesoCri, MaiorAltura, MenorAltura)

void main()
{
    int idade = 0, QntPesoSup60 = 0, AltInf160 = 0, QntPessoas = 0, Homens = 0, Mulheres = 0, qntPessoas18a23 = 0, Qntdcri = 0;
    float peso = 0, altura = 0, mediaIdHomem = 0, Percent18a23 = 0, AltMedMulher = 0, MedPesoCri = 0, MaiorAltura = -999999, MenorAltura = 99999, SomaMediaHomem = 0, alturamulheres = 0, pesocri = 0;
    char sexo;
    printf("Altura:\n");
    scanf("%f", &altura);
    while(altura > 0)
    {
        QntPessoas++;
        printf("peso:\n");
        scanf("%f", &peso);
        printf("Idade:\n");    
        scanf("%d", &idade);
        printf("Sexo:\n");    
        scanf(" %c", &sexo);
        if (sexo == 'F' || sexo == 'f')
        {
            Mulheres++;
            alturamulheres += altura;
        }
        if (sexo == 'm' || sexo == 'M')
        {
            Homens++;
            SomaMediaHomem += idade;
        }
        if ( peso > 60 ) 
        {
            QntPesoSup60++;
        }
        if ( altura < 160 )
        {
            AltInf160++;
        }
        if ( idade >= 18 && idade <= 23)
            qntPessoas18a23++;
        if ( idade <= 12)
        {   
            Qntdcri++;
            pesocri += peso;
        }
        if ( altura > MaiorAltura )
            MaiorAltura = altura;
        if ( altura < MenorAltura )
            MenorAltura = altura;
            

        printf("Altura:\n");
        scanf("%f", &altura);
    }
    MedPesoCri = pesocri / Qntdcri; //e
    AltMedMulher = alturamulheres / Mulheres; //d
    Percent18a23 = (qntPessoas18a23 / QntPessoas) * 100 ; //c
    mediaIdHomem = SomaMediaHomem / Homens; //a 




    printf("Media de idade entre os homens: %f\n", mediaIdHomem); //a
    printf("Percentual de pessoas entre 18 a 23 anos: %f\n", Percent18a23); //c
    printf("A quantidade de pessoas com peso superior a 60 quilos: %d\nQuantidade de pessoas com altura inferior a 160cm: %d\n", QntPesoSup60, AltInf160); //b
    printf("Altura media das mulheres: %f\n", AltMedMulher); //d
    printf("A media do peso das criancas e: %f\n", MedPesoCri); //e
    printf("Maior altura: %f\n", MaiorAltura);
    printf("Menor altura: %f\n", MenorAltura);



} 