/* Questão 17. Fatorial Iterativo e Recursivo — Escreva duas funções: long fatorialIterativo(int
n), usando laço de repetição, e long fatorialRecursivo(int n), usando recursão. Na main(), leia
um inteiro não negativo, imprima o resultado das duas versões e confirme se coincidem.
*/

#include <stdio.h>

// protótipos
long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main()
{
    int n;
    long f1, f2;

    printf("Digite um inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Numero invalido! Precisa ser >= 0.\n");
        return 0;
    }

    f1 = fatorialIterativo(n);
    f2 = fatorialRecursivo(n);

    printf("Iterativo: %d! = %ld\n", n, f1);
    printf("Recursivo: %d! = %ld\n", n, f2);

    if (f1 == f2)
        printf("Os resultados coincidem.\n");
    else
        printf("Os resultados NAO coincidem.\n");

    return 0;
}

// calcula n! com laço for
long fatorialIterativo(int n)
{
    long resultado = 1;
    int i;

    for (i = 2; i <= n; i++)
        resultado = resultado * i;

    return resultado;
}

// calcula n! com recursão
long fatorialRecursivo(int n)
{
    // caso base: 0! = 1
    if (n == 0)
        return 1;

    // passo recursivo: n! = n * (n-1)!
    return n * fatorialRecursivo(n - 1);
}
