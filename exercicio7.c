#include <stdio.h>
#include <math.h>

int main(void)
/* ae(precoVenda, PrecoCompra) as(LucroPercentual) */
{
    float precoVenda, PrecoCompra, LucroPercentual;
    printf("Digite o Valor do preco de compra: ");
    scanf("%f", &PrecoCompra);
    printf("Digite o Valor do preco de venda: ");
    scanf("%f", &precoVenda);
    LucroPercentual = ((precoVenda - PrecoCompra)/PrecoCompra)*100;
    printf("O Lucro percentual da venda efetuada sera de %.2f%%", LucroPercentual);
return 0;
}
