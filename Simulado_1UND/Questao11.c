/*Questão 11. Cálculo Salarial com Gratificação e Impostos —
Uma empresa contrata um técnico a R$ 45,00 por dia trabalhado. Crie um programa em C
que solicite o número de dias trabalhados, calcule o salário bruto, adicione uma
gratificação de 5% sobre o bruto e desconte 8% de imposto de renda sobre o bruto.
Ao final, exiba o holerite detalhado com o valor líquido a receber.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.0;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("\n===== HOLERITE =====\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario bruto:    R$ %.2f\n", bruto);
    printf("Gratificacao 5%%:  R$ %.2f\n", gratificacao);
    printf("Imposto 8%%:       R$ %.2f\n", imposto);
    printf("--------------------\n");
    printf("Liquido a receber: R$ %.2f\n", liquido);

    system("PAUSE");
    return 0;
}
