/*
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int soma = 0;
//       INÍCIO   CONDIÇÃO  AÇÃO
    for(int n = 1; n <= 50; n++){
        soma += n * 2;
        printf("%d;\n", soma);
    }
    printf("\nCalculo realizado!");
    return 0;
}