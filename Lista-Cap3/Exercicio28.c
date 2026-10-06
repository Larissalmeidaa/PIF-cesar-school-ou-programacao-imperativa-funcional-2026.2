/*Questão 28. Sistema de Folha de Pagamento com Menu Contínuo (do-while & switch) —
Desenvolva um programa completo para gerenciamento de folha de pagamento de uma empresa. O
programa deve exibir um menu de opções em um laço do-while contínuo:
1. Reajuste Salarial (Calcula e exibe novo salário: 15% de aumento para salários até R$ 2.000,00 e
10% para salários superiores).
2. Retenção de Imposto de Renda (Calcula desconto: 8% para salários até R$ 3.000,00 e 15% para
salários superiores).
3. Encerrar Programa.
O programa deve validar as opções do menu e só finalizar a execução quando a opção 3 for
expressamente selecionada.
*/
#include <stdio.h>

int main()
{
    int opcao, vez;
    float salario, taxa, resultado;

    do
    {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        /* roda 1 vez se a opcao for 1 ou 2, e 0 vezes nos outros casos */
        for (vez = 0; vez < (opcao == 1 || opcao == 2); vez++)
        {
            printf("Digite o salario: R$ ");
            scanf("%f", &salario);

            taxa = opcao == 1 ? (salario <= 2000 ? 0.15 : 0.10)
                              : (salario <= 3000 ? 0.08 : 0.15);

            resultado = opcao == 1 ? salario + salario * taxa
                                   : salario * taxa;

            printf(opcao == 1 ? "Reajuste de %.0f%%. Novo salario: R$ %.2f\n"
                              : "Imposto de %.0f%%. Valor retido: R$ %.2f\n",
                   taxa * 100, resultado);
        }

        printf(opcao == 3 ? "Encerrando o programa...\n" : "");
        printf((opcao < 1 || opcao > 3) ? "Opcao invalida! Escolha 1, 2 ou 3.\n" : "");

    } while (opcao != 3);

   
    return 0;
}