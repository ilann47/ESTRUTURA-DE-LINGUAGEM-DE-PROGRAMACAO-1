/*
8) Dado um conjunto contendo quatro valores (i,a,b,c), sendo i um valor inteiro, faça:
se i = 1, ordene em ordem crescente a,b,c
se i = 2, ordene em ordem decrescente a,b,c
se i = 3, informar os três valores, de forma que o maior valor entre a, b e c fique entre
os outros dois.
Para qualquer outro valor de i divida a soma de a, b e c pelo maior valor entre os
mesmos
*/









#include <stdio.h>
void trocar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int i, a, b, c;
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    if (i == 1)
    {
        if (a > b) trocar(&a, &b);
        if (b > c) trocar(&b, &c);
        if (a > b) trocar(&a, &b);
    }
    else if (i == 2)
    {
        if (a < b) trocar(&a, &b);
        if (b < c) trocar(&b, &c);
        if (a < b) trocar(&a, &b);
    }
    else if (i == 3)
    {
        if (a > b) trocar(&a, &b);
        if (b > c) trocar(&b, &c);
        if (a > b) trocar(&a, &b);
        trocar(&b, &c);
    }
    else
    {
        int maior = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
        printf("A soma de a, b e c dividida pelo maior valor (%d) é %.2f\n", 
               maior, (float)(a+b+c)/maior);
        return 0;
    }
    printf("Valores ordenados ou alterados: %d %d %d\n", a, b, c);
    return 0;
}