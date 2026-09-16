/*Questão 25. Salário Líquido com Gratificação e Tributação — Faça um programa em C que leia
o salário-base de um funcionário. O programa deve calcular e exibir o salário líquido a receber
sabendo que esse funcionário tem uma gratificação fixa de 5% sobre o seu salário-base (adicional),
mas paga um imposto retido de 7% também calculado sobre o seu salário-base. Justifique a
fórmula matemática do cálculo através dos operadores aritméticos.
*/

#include <stdio.h>

int main()
{
    float salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;
    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}