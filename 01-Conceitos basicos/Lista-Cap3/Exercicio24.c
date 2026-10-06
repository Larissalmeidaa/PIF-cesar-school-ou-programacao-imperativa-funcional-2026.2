/*Questão 24. Padrão Visual em X (Diagonais Cruzadas) — Crie um programa em C que solicite uma
dimensão ímpar N (entre 3 e 19). O programa deve utilizar laços aninhados e condicionais lógicas para
desenhar um padrão visual de duas diagonais que se cruzam no centro formando um 'X' com o caractere
'*'. Por exemplo, para N = 5:

*   *
 * *
  *
 * *
*   *

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    do
    {
        printf("Digite uma dimensao impar N (3 a 19): ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            putchar((i == j || i + j == n + 1) ? '*' : ' ');

        printf("\n");
    }

    system("PAUSE");
    return 0;
}