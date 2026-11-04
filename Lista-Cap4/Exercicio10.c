/*Questão 10. Análise de Paridade e Sinal de Inteiros — Faça um programa em C que receba um
número inteiro do usuário e determine simultaneamente:
a) Se o número é PAR ou ÍMPAR (utilizando o operador resto da divisão %).
b) Se o número é POSITIVO, NEGATIVO ou ZERO.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // a) paridade: resto da divisao por 2
    if (numero % 2 == 0)
        printf("PAR\n");
    else
        printf("IMPAR\n");

    // b) sinal
    if (numero > 0)
        printf("POSITIVO\n");
    else if (numero < 0)
        printf("NEGATIVO\n");
    else
        printf("ZERO\n");

    system("PAUSE");
    return 0;
}
