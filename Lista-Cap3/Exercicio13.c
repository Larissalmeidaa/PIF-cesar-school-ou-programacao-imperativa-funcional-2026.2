/*Questão 13. Cálculo de Fatorial com Tratamento de Casos Especiais — Escreva um programa que
leia um número inteiro N e calcule o seu fatorial (N!). Lembre-se de que 0! = 1 e 1! = 1. O programa
deve utilizar o tipo de dado 'long long int' para evitar estouro de memória prematuro e deve exibir uma
mensagem de erro caso o usuário forneça um número negativo.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
        fatorial *= i;

    printf(n < 0 ? "Erro: nao existe fatorial de numero negativo.\n"
                 : "%d! = %lld\n", n, fatorial);

    system("PAUSE");
    return 0;
}