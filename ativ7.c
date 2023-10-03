/*
7. Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, 
referentes a cada habitante:

a) sexo (m e f);

b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

d) idade em anos.

e) valor do salário.

Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, 
apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 
e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.

Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos 
castanhos e cabelos castanhos 
*/
#include <stdio.h>
#include <math.h>

int main(){
    char sexo[2], corO[2], corC[2];
    int idade, repeticao = 0, totalI = 0, individuoE = 0;
    float salario = 0, individuoP;

    printf("Me fala sobre uma pessoa fisica;\n");
    do{
        printf("Seu salario:\n");
        scanf("%f", &salario);
        if(salario < 0){
            repeticao = -1;
        }else{
            totalI++;
        
        while(getchar() != '\n');
        printf("Seu sexo:\nInforme com M ou F;\n");
        scanf("%s", sexo);
        while(getchar() != '\n');
        printf("A cor de seu olho:\n(a (azuis), v (verdes), c (castanhos), p (pretos))\n");
        scanf("%s", corO);
        while(getchar() != '\n');
        printf("A cor de seu cabelo:\n(l (loiros), c (castanhos), p (pretos), r (ruivos))\n");
        scanf("%s", corC);
        while(getchar() != '\n');
        printf("Sua idade:\n");
        scanf("%d", &idade);
        while(getchar() != '\n');


        if(strcasecmp(sexo, "f") == 0 && idade > 17 && idade < 36 && strcasecmp(corO, "c") == 0 && strcasecmp(corC, "c") == 0){
            individuoE++;
        }
        printf("\nCaso deseja parar de informar sobre uma pessoa fisica, insira um salario negativo;\n");
        }

    }while(repeticao != -1);

    individuoP = ((float)individuoE * 100) / (float)totalI;
    printf("Foi registrado no total %d indivuos. E de requisitos especificos existem %d com uma porcentagem de %.2f%%", totalI, individuoE, individuoP);

    return 0;
}