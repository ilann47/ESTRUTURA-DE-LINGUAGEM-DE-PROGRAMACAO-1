/*
10) Supondo que um casal de coelhos produz um novo casal de filhotes a cada mês, e que
cada novo casal se torna fértil em um mês e que os coelhos nunca morrem, a quantidade
de casais de coelhos férteis após n meses é dada pelo n-ésimo termo da seguinte
seqüência:
F(1) = 1, F(2) = 1, F(3) = 2, ..., F(N) = F(N-2) + F(N-1)
Calcular a quantidade de casais de coelhos férteis após N meses. 
*/



#include <stdio.h>

int main()
{
    int meses = 0, casalFertil = 0;
    printf("Diga a quantidade de meses de reproducao: ");
    scanf("%d", &meses);
    if (meses <= 2)
        casalFertil = 1;
    else if (meses > 2)
        casalFertil = (meses-2) + (meses-1);
    
    printf("A quantidade de coelhos ferteis sera de: %d", casalFertil);






    return 0;
}
