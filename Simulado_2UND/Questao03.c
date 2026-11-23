/* Questão 03. Controle de Ingressos de Cinema (Cap. 4) — Um cinema vende ingressos a R$
40,00. Pessoas com menos de 12 anos ou com mais de 60 anos pagam metade do valor. Às
quartas-feiras, todos os clientes pagam metade do valor (o desconto não é acumulativo).
Escreva um programa em C que leia a idade do cliente e o dia da semana (1 = Domingo, ..., 7
= Sábado) e exiba o valor do ingresso.
*/

#include <stdio.h>

#define PRECO 40.0

int main()
{
    int idade, dia;
    float valor;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);
    printf("Digite o dia da semana (1 = Domingo, ..., 7 = Sabado): ");
    scanf("%d", &dia);

    if (idade < 0 || dia < 1 || dia > 7)
    {
        printf("Dados invalidos.\n");
        return 1;
    }

    // quarta-feira = 4; o desconto nao acumula, entao basta uma das condicoes
    if (idade < 12 || idade > 60 || dia == 4)
        valor = PRECO / 2;
    else
        valor = PRECO;

    printf("Valor do ingresso: R$ %.2f\n", valor);

    return 0;
}
