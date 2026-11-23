/* Questão 07. Números Primos com Função (Cap. 5) — Crie a função int ehPrimo(int n), que
devolve 1 se n for primo e 0 caso contrário. Na main(), leia um inteiro N e exiba todos os
números primos de 1 até N. Declare o protótipo da função antes da main().
*/

#include <stdio.h>

int ehPrimo(int n); // protótipo

int main()
{
    int n, i;

    printf("Digite N: ");
    scanf("%d", &n);

    printf("Primos de 1 ate %d: ", n);
    for (i = 1; i <= n; i++)
    {
        if (ehPrimo(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

// devolve 1 se n for primo e 0 caso contrario
int ehPrimo(int n)
{
    int d;

    if (n < 2)
        return 0;

    for (d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
            return 0;
    }

    return 1;
}
