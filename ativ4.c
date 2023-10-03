//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.
#include <stdio.h>
#include <math.h>

int main(){


    printf("O multiplo de 3 cinco vezes e: \n");
//       INÍCIO   CONDIÇÃO  AÇÃO
    for(int r = 3; r <= 243; r *= 3){
        printf("%d; ", r);
    }
    printf("\nCalculo realizado!");
    return 0;
}