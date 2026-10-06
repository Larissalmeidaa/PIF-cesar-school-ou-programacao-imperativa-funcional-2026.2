/*Questão 22. Geração do Triângulo de Floyd com Laços Aninhados — Escreva um programa em C
que leia um número inteiro positivo N e imprima N linhas do Triângulo de Floyd. Por exemplo, se N =
5, a saída na tela deve ser exatamente:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, linha, coluna;
    int numero = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (linha = 1; linha <= n; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}