/*Questão 26. Quantidade de Dias de um Mês e Validação de Fevereiro Bissexto — Desenvolva um
programa que solicite o número de um mês (1 a 12) e o ano corrente. O programa deve informar o
nome do mês e quantos dias ele possui. Para o mês de fevereiro (mês 2), o programa deve checar se o
ano informado é bissexto para imprimir '29 dias' ou '28 dias'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes, ano, dias;

    printf("Digite o mes (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes)
    {
        case 1: printf("Janeiro"); dias = 31; break;
        case 2:
            printf("Fevereiro");
            // mesma regra de bissexto da questao 8
            if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
                dias = 29;
            else
                dias = 28;
            break;
        case 3: printf("Marco"); dias = 31; break;
        case 4: printf("Abril"); dias = 30; break;
        case 5: printf("Maio"); dias = 31; break;
        case 6: printf("Junho"); dias = 30; break;
        case 7: printf("Julho"); dias = 31; break;
        case 8: printf("Agosto"); dias = 31; break;
        case 9: printf("Setembro"); dias = 30; break;
        case 10: printf("Outubro"); dias = 31; break;
        case 11: printf("Novembro"); dias = 30; break;
        case 12: printf("Dezembro"); dias = 31; break;
        default:
            printf("Erro: mes invalido!\n");
            return 1;
    }
    printf(" tem %d dias\n", dias);

    system("PAUSE");
    return 0;
}
