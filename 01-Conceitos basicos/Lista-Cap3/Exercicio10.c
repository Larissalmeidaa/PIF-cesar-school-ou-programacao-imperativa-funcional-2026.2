/*Questão 10. Geração de Múltiplos com Formatação em Colunas — Desenvolva um programa que
determine e exiba no console os 100 primeiros múltiplos inteiros e positivos de 3 (isto é: 3, 6, 9, 12,
...). A saída deve ser formatada organizadamente em colunas contendo 10 números por linha separados
por tabulação (\t).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna;
    int multiplo = 3;

    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            printf("%d\t", multiplo);
            multiplo += 3;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}