/*Questão 17. Cálculo de Pagamento e Comissão de Vendas — Escreva um programa em C para
auxiliar um vendedor. O programa lê o valor total de uma compra e a opção de pagamento (1 = À Vista
com 10% de desconto; 2 = Parcelado em 3x sem juros). O programa deve calcular e exibir:
a) O valor final a pagar com desconto (se à vista) ou o valor de cada parcela (se parcelado).
b) A comissão do vendedor, que é de 5% sobre o valor com desconto (à vista) ou 5% sobre o valor
total (parcelado).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, valorFinal, comissao;
    int opcao;

    printf("Valor total da compra: ");
    scanf("%f", &valor);
    printf("Pagamento (1 = A vista, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        valorFinal = valor * 0.90;     // 10% de desconto
        comissao = valorFinal * 0.05;  // 5% sobre o valor com desconto
        printf("Valor a pagar: R$ %.2f\n", valorFinal);
        printf("Comissao: R$ %.2f\n", comissao);
    }
    else if (opcao == 2)
    {
        comissao = valor * 0.05;       // 5% sobre o valor total
        printf("3 parcelas de R$ %.2f\n", valor / 3);
        printf("Comissao: R$ %.2f\n", comissao);
    }
    else
        printf("Opcao invalida!\n");

    system("PAUSE");
    return 0;
}
