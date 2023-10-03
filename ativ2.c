/*
Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 
*/
#include <stdio.h>

int main() {

  int x;

  printf("Informe seu numero: ");
  scanf("%d", &x);
  while (getchar() != '\n')
    ;
  printf("Seu numero Natural tem essa ordem decrescente: \n");
  //       INÍCIO   CONDIÇÃO  AÇÃO
  for (int r = x; r >= 0; r--) {
    printf("%d; ", r);
  }

  return 0;
}