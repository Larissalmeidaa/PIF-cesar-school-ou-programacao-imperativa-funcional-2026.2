//Questão 05. Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o
//programa está correto para compilação e execução imediata? Caso negativo, descreva quais
//elementos cruciais e diretivas estão faltando no código abaixo:

/*
main()  - Falta a biblioteca. O int do main. O return 0 para finalzar o código. Resultado de como seria abaixo
{
 printf("Linguagem C");
 system("pause");
}
 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("Linguagem C\n ");
    system("PAUSE");

    return 0;
}