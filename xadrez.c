#include <stdio.h>
void movertorre(int torre){
if (torre > 0){
    printf("Direita \n");
    movertorre(torre - 1);
}
}

void moverbispo(int bispo){
    if (bispo > 0){
        printf("Cima, direita \n");
        moverbispo(bispo - 1);
    }

}

void moverrainha(int rainha){
    if (rainha > 0){
        printf("Esquerda \n");
        moverrainha(rainha - 1);
    }

}

int main ()
{
   int cavalo, cavalo2 = 1;

   printf("Mover a torre 5 vezes a esquerda: \n");

   movertorre(5);

   printf("Mover o bispo 5 vezes na diagonal a direita: \n");

   moverbispo(5);

   printf("mover a rainha 8 vezes a esquerda: \n");

   moverrainha(8);

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
