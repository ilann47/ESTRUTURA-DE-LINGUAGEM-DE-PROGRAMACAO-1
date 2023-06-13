/*
4) Fornecido o valor de T, calcule o valor de W, sabendo que: W = 2T + 4Y - 3X
onde X = 2T - 4 e Y = T/2 + 4 
*/






#include <stdio.h>
#include <math.h>

void main()
/*ae(t)as(w)*/
{
 float t, w, y, x;
 printf("entre com o valor de T: ");
 scanf("%f", &t);
 y = t*2+4;
 x = 2*t-4;
 w = 2*t+4*y-3*x;
 printf("o valor de W sera de %.2f", w);
 
    
}