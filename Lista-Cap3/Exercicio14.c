/*Questão 14. Sequência de Quadrados e Acumulador Global — Desenvolva um programa que
imprima todos os números inteiros de 1 a 100, acompanhados de seus respectivos quadrados (1 -> 1,
2 -> 4, 3 -> 9, ..., 100 -> 10000). Ao final da listagem, o programa deve calcular e exibir a soma total
dos quadrados de todos esses 100 números.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("%d -> %d\n", i, i * i);
        soma += i * i;
    }

    printf("\nSoma total dos quadrados: %d\n", soma);

    system("PAUSE");
    return 0;
}