/*

15) Um comerciante deseja fazer o levantamento dos lucros das mercadorias que ele
comercializa. Para isto, dispõe de uma lista de mercadorias contendo: código da
mercadoria (numérico inteiro), o preço de compra e de venda das mesmas, e a
quantidade de cada mercadoria no estoque. Faça um algoritmo, que:
a) calcule e informe quantas mercadorias proporcionam:
 lucro <= 10%
 10% < lucro <= 20%
 lucro > 20%
b) determine qual a mercadoria que lhe proporciona a maior e o menor lucro
percentual;
c) calcule qual o montante investido no estoque;
*** adote flag adequado 

*/
/*
     ae()as(LucroMercadorias)
*/

#include <stdio.h>
#include <math.h>

int main()
{
     int codigomercadoria, lista = 1, estoque = 0, Lista1 = 0, Lista2 = 0, fechar;
     float precoCompra = 0, precoVenda = 0, lucro = 0, lucronegativo = 0, lucromedio = 0, lucropositivo = 0, montante = 0, maiorlucro = 0, menorlucro = 99999999, percentual = 0;
     char breaker;
     printf("\nQual e o codigo de mercadoria do produto %i da lista? (0 e definido como fim do programa)\n", lista);
     scanf("%i", &codigomercadoria);
     while ( codigomercadoria > 0 )
     {
          printf("Qual e o preco de compra desta mercadoria? \nR$");
          scanf("%f", &precoCompra);
          printf("Qual e o preco de venda desta mercadoria? \nR$");
          scanf("%f", &precoVenda);
          printf("Qual a quantidade disponivel no estoque desta mercadoria ? \n");
          scanf("%i", &estoque);
          montante += precoCompra * estoque;
          lucro = precoVenda - precoCompra;
          percentual = (lucro / precoCompra) * 100 ;
          if ( percentual > maiorlucro )
          {
               Lista1 = lista;
               maiorlucro = percentual;
          }
          else if ( percentual < menorlucro )
          {
               Lista2 = lista;
               menorlucro = percentual;
          }
          printf("Esta mercadoria proporciona um lucro de: R$%.2f \nPercentual de: %2.f%%", lucro, percentual);
          lista ++;   
          printf("\n\nQual e o codigo de mercadoria do produto %i da lista? (0 e definido como fim do programa)\n", lista);
          scanf("%i", &codigomercadoria);


          if( percentual <= 10 )
               lucronegativo ++;

          else if (( 10 < percentual ) && ( percentual <= 20 ))
               lucromedio ++;

          else if ( percentual > 20 )
               lucropositivo ++;     

  
     }
     printf("\nMERCADORIAS QUE PROPORCIONARAM LUCRO INFERIOR A 11%%: %.2f\n", lucronegativo);
     printf("MERCADORIAS QUE PROPORCIONARAM LUCRO SUPERIOR A 10%% E INFERIOR A 21%%: %.2f\n", lucromedio);
     printf("MERCADORIAS QUE PROPORCIONARAM LUCRO SUPERIOR A 20%%: %.2f\n", lucropositivo);
     printf("O PRODUTO %i, FOI O QUE MAIS PROPORCIONOU LUCRO COM PERCENTUAL DE %.2f%%\n", Lista1, maiorlucro);
     printf("O PRODUTO %i, FOI O QUE MENOS PROPORCIONOU LUCRO COM PERCENTUAL DE %.2f%%\n", Lista2, menorlucro);
     printf("O MONTANTE INVESTIDO NO ESTOQUE FOI DE: R$%.2f\n", montante);

     breaker = getchar();
     scanf("%c", &breaker);
     return 0;
}