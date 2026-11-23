/* Questão 11. Verificação de Número Par — Desenvolva uma função int ehPar(int n) que
retorne 1 se o número for par e 0 caso contrário. Na main(), leia um inteiro e imprima uma
mensagem clara informando se ele é par ou ímpar.
*/

#include <stdio.h>

int ehPar(int n); // protótipo

int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero))
        printf("%d e PAR.\n", numero);
    else
        printf("%d e IMPAR.\n", numero);

    return 0;
}

// devolve 1 se n for par, 0 se for ímpar
int ehPar(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}
