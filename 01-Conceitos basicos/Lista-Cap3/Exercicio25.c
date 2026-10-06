/*Questão 25. Análise e Teste de Primalidade de um Número Inteiro — Escreva um programa em C
que receba um número inteiro positivo N e determine se N é um número primo. Um número é primo se
for maior que 1 e divisível apenas por 1 e por ele mesmo. O programa deve contar a quantidade de
divisores encontrados no laço e exibir uma mensagem conclusiva.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        divisores += (n % i == 0);

    printf("O numero %d tem %d divisor(es).\n", n, divisores);
    printf(divisores == 2 ? "%d e primo.\n" : "%d nao e primo.\n", n);

    system("PAUSE");
    return 0;
}