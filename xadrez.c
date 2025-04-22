#include <stdio.h>
int main ()
{
   
   int torre = 1;
   int bispo = 1;
   int rainha = 1;
   int cavalo, cavalo2 = 1;

   printf("Mover a torre 5 vezes para a direita: \n");
   
   for (torre = 1 ; torre <= 5; torre++)
   {
     printf("Direita \n");
   }

   printf("Mover o bispo 5 casas na diagonal a direita: \n");
   
   while (bispo <= 5)
   {
    printf("Cima,Direita \n");
    bispo++;
   }

   printf("mover a rainha 8 vezes a esquerda: \n");

   do
   {
   printf("esquerda \n");
   rainha++;
   } while (rainha <= 8);

   printf("Mover o cavalo 2 vezes para baixo e 1 vez para esquerda: \n");

   for (cavalo = 1; cavalo <= 1; cavalo++ ){
   do
    {
        printf("baixo \n");
        cavalo2++;
    } while (cavalo2 == 2);

    printf("Esquerda \n");
    
   }
   
   
 return 0;
}
