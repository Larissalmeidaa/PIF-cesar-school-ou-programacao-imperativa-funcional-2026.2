/*Questão 23. Desenho de Moldura e Quadrado Vazado com Caracteres — Desenvolva um
programa que solicite ao usuário a dimensão do lado de um quadrado L (com L entre 3 e 20). O
programa deve utilizar laços aninhados para desenhar no console um quadrado vazado composto pelo
caractere 'X'. Por exemplo, para L = 5, a saída deve ser:

XXXXX
X   X
X   X
X   X
XXXXX
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, i, j;

    do
    {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &l);
    } while (l < 3 || l > 20);

    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= l; j++)
            putchar((i == 1 || i == l || j == 1 || j == l) ? 'X' : ' ');

        printf("\n");
    }

    system("PAUSE");
    return 0;
}