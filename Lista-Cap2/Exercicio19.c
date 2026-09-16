/*Questão 19. Cálculo de Salário Líquido com Desconto na Fonte — Uma empresa de prestação
de serviços contrata um encanador à taxa fixa de R$ 30,00 por dia útil trabalhado. Elabore um
programa que solicite ao usuário o número de dias efetivamente trabalhados pelo profissional.
Calcule e imprima a quantia bruta devida e o valor líquido final a ser pago, sabendo que são
descontados estritamente 8% de imposto de renda retido na fonte sobre o total bruto.
*/

#include <stdio.h>

#define TAXA_DIARIA 30.0
#define TAXA_IMPOSTO 0.08

int main()
{
    int diasTrabalhados;
    double salarioBruto, valorImposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * TAXA_DIARIA;
    valorImposto = salarioBruto * TAXA_IMPOSTO;
    salarioLiquido = salarioBruto - valorImposto;

    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto retido (8%%): R$ %.2f\n", valorImposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
