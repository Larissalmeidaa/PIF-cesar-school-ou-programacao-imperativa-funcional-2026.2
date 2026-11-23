/* Questão 20. Número Primo — Crie uma função int ehPrimo(int n) que retorne 1 se n for primo
e 0 caso contrário, usando um laço de repetição. Na main(), leia um inteiro e informe o
resultado. Em seguida, use a função dentro de um laço for para imprimir todos os números
primos de 1 até 50.
*/

#include <stdio.h>

int ehPrimo(int n); // protótipo

int main()
{
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (ehPrimo(numero))
        printf("%d e primo.\n", numero);
    else
        printf("%d nao e primo.\n", numero);

    printf("Primos de 1 ate 50: ");
    for (i = 1; i <= 50; i++)
    {
        if (ehPrimo(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

// devolve 1 se n for primo, 0 se não for
int ehPrimo(int n)
{
    int i;

    if (n < 2) // 0, 1 e negativos não são primos
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0) // achou um divisor, não é primo
            return 0;
    }

    return 1;
}
