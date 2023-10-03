/*
6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas.
Assim, apresente a lista de  frutas disponíveis, abaixo, com seus respectivos
valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas
vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor
total da compra.

1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a
unidade
*/
#include <math.h>
#include <stdio.h>

int main() {
  int opcao, fruta, Fvalor, Tvalor, qtd;

  printf("FRUTAS:\n1 => ABACAXI - 5,00 a unidade; \n2 => MACA - 1,00 a "
         "unidade; \n3 => PERA - 4,00 a unidade;");
  do {
    printf("\nQual fruta deseja?\n");
    scanf("%d", &fruta);
    while (getchar() != '\n')
      ;
    switch (fruta) {
    case 1:
      Fvalor = 5;
      printf("\nQuantos deseja?\n");
        scanf("%d", &qtd);
        while (getchar() != '\n');
        Tvalor = Fvalor * qtd;
      break;
    case 2:
      Fvalor = 1;
      printf("\nQuantos deseja?\n");
        scanf("%d", &qtd);
        while (getchar() != '\n');
        Tvalor = Fvalor * qtd;
      break;
    case 3:
      Fvalor = 4;
      printf("\nQuantos deseja?\n");
        scanf("%d", &qtd);
        while (getchar() != '\n');
        Tvalor = Fvalor * qtd;
      break;
    default:
      printf("Insira uma fruta valida;");
      break;
    }
    printf("\nO valor total de sua compra esta de R$%d,00;", Tvalor);
    printf("\nDeseja outra fruta? \n1 - SIM;\n2 - NAO;\n");
    scanf("%d", &opcao);
    while (getchar() != '\n')
      ;
  } while (opcao != 2);

  return 0;
}