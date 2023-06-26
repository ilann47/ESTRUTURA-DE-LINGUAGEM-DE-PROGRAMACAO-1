#include <stdio.h>
/*AE{}AS{S}*/
int main()
{
    int s,i,num,den,vi;
    num=1;
    den=1;
    for (i=1;i<50;i++){
        s=s+num/den;
        num=num+2;
        den=den+1;
    }
    printf("Valor de S %d \n",s);
    printf("Valor de Num %d \n",num);
    printf("Valor de Den %d \n",den);
    return 0;
}