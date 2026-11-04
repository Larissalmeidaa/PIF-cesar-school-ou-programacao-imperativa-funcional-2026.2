/*Questão 08. Verificação de Ano Bissexto — Desenvolva um programa em C que solicite ao usuário
um ano (número inteiro positivo) e determine se esse ano é bissexto ou não. Regra: Um ano é bissexto
se for divisível por 400 OU se for divisível por 4 e NÃO for divisível por 100. Exiba uma mensagem
clara no console confirmando o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    // bissexto: divisivel por 400, ou por 4 e nao por 100
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        printf("%d e bissexto.\n", ano);
    else
        printf("%d nao e bissexto.\n", ano);

    system("PAUSE");
    return 0;
}
