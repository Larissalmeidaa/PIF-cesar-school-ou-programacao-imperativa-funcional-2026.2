/* Questão 28. Caixa Simples de Mercadinho — Desenvolva um programa com as funções
float calculaSubtotal(float preco, int quantidade), float aplicaDesconto(float valor, int
opcaoPagamento), com 10% de desconto à vista, e float calculaTroco(float total, float pago).
Na main(), leia o preço, a quantidade, a forma de pagamento e o valor pago, e exiba o
subtotal, o total a pagar e o troco.
*/

#include <stdio.h>

// protótipos
float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main()
{
    float preco, pago, subtotal, total;
    int quantidade, opcao;

    printf("Preco do produto: R$ ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &quantidade);

    printf("Forma de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Cartao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcao);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Valor pago: R$ ");
    scanf("%f", &pago);

    if (pago < total)
        printf("Valor insuficiente! Faltam R$ %.2f\n", total - pago);
    else
        printf("Troco: R$ %.2f\n", calculaTroco(total, pago));

    return 0;
}

// preço vezes quantidade
float calculaSubtotal(float preco, int quantidade)
{
    return preco * quantidade;
}

// opção 1 (à vista) tem 10% de desconto; outras opções não têm
float aplicaDesconto(float valor, int opcaoPagamento)
{
    if (opcaoPagamento == 1)
        return valor * 0.9;
    return valor;
}

// quanto devolver ao cliente
float calculaTroco(float total, float pago)
{
    return pago - total;
}
