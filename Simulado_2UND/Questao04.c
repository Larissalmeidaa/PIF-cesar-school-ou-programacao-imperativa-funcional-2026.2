/* Questão 04. Análise de Empréstimo Pessoal (Cap. 4) — Um banco aprova empréstimos
pessoais seguindo as regras: o cliente deve ter entre 18 e 70 anos (inclusive) e renda mensal
de pelo menos R$ 2.000,00; além disso, o valor solicitado não pode ultrapassar 10 vezes a
renda. Escreva um programa que leia a idade, a renda e o valor solicitado e exiba
"Empréstimo aprovado!", "Valor acima do limite permitido." (quando o cliente atende às
condições de idade e renda, mas pede valor alto demais) ou "Empréstimo negado." nos
demais casos.
*/

#include <stdio.h>

int main()
{
    int idade;
    float renda, valor;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o valor solicitado: ");
    scanf("%f", &valor);

    if (idade >= 18 && idade <= 70 && renda >= 2000.0)
    {
        if (valor <= 10 * renda)
            printf("Emprestimo aprovado!\n");
        else
            printf("Valor acima do limite permitido.\n");
    }
    else
    {
        printf("Emprestimo negado.\n");
    }

    return 0;
}
