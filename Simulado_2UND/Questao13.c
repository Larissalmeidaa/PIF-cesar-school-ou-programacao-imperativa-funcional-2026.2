/* Questão 13. Vendas por Loja e Produto (Matriz) (Cap. 7) — Uma rede possui 4 lojas que
vendem 3 produtos. Declare uma matriz int vendas[4][3], leia as quantidades vendidas de
cada produto em cada loja e exiba o total vendido por loja e qual produto vendeu mais
unidades no total da rede.
*/

#include <stdio.h>

#define LOJAS 4
#define PRODUTOS 3

int main()
{
    int vendas[LOJAS][PRODUTOS];
    int totalProduto[PRODUTOS] = {0};
    int i, j, totalLoja, maisVendido = 0;

    for (i = 0; i < LOJAS; i++)
    {
        for (j = 0; j < PRODUTOS; j++)
        {
            printf("Loja %d - quantidade vendida do produto %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
        }
    }

    printf("\n--- Total vendido por loja ---\n");
    for (i = 0; i < LOJAS; i++)
    {
        totalLoja = 0;
        for (j = 0; j < PRODUTOS; j++)
        {
            totalLoja += vendas[i][j];
            totalProduto[j] += vendas[i][j];
        }
        printf("Loja %d: %d unidades\n", i + 1, totalLoja);
    }

    for (j = 1; j < PRODUTOS; j++)
    {
        if (totalProduto[j] > totalProduto[maisVendido])
            maisVendido = j;
    }

    printf("\nProduto mais vendido na rede: produto %d (%d unidades)\n",
           maisVendido + 1, totalProduto[maisVendido]);

    return 0;
}
