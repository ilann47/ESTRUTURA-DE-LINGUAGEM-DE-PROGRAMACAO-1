#include <stdio.h>
#include <math.h>
/*ae()*/
int main()
{
    double num, den = 2, A, sinal = -1, coseno = 0, fat = 2, i;
    scanf("%lf", &A);
    A = A*A;
    num = A;

    for(i=0;i<=2;i++)
    {
        coseno += (num/den) * sinal;
        sinal *= -1;
        fat +=  2;
        den *= fat;
        fat +=  2;
        den *= fat;
    }
    printf("%f", coseno);
    return 0;
}