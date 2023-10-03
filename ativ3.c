/*
Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares 
(sem usar comando condicional).
*/
#include <stdio.h>

int main(){

    int x;

    printf("Informe seu numero: ");
    scanf("%d", &x);
    while (getchar() != '\n');
    printf("Seu numero Natural tem essa ordem crescente de impares: \n");
//       INÍCIO   CONDIÇÃO  AÇÃO
    for(int r = 1; r <= x; r += 2){
        printf("%d; ", r);
    }

    return 0;
}