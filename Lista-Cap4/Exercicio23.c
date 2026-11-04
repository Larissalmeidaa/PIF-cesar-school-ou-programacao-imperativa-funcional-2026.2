/*Questão 23. Impressão de Data Por Extenso com switch-case — Elabore um programa que solicite
ao usuário uma data no formato numérico de três inteiros: Dia, Mês e Ano (exemplo: 25 12 2026). O
programa deve validar se o mês está no intervalo [1, 12] e utilizar a estrutura switch-case para
converter o número do mês em seu nome por extenso, imprimindo a saída formatada como: '25 de
dezembro de 2026'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;

    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12)
    {
        printf("Erro: mes invalido!\n");
        return 1;
    }

    printf("%d de ", dia);
    switch (mes)
    {
        case 1: printf("janeiro"); break;
        case 2: printf("fevereiro"); break;
        case 3: printf("marco"); break;
        case 4: printf("abril"); break;
        case 5: printf("maio"); break;
        case 6: printf("junho"); break;
        case 7: printf("julho"); break;
        case 8: printf("agosto"); break;
        case 9: printf("setembro"); break;
        case 10: printf("outubro"); break;
        case 11: printf("novembro"); break;
        case 12: printf("dezembro"); break;
    }
    printf(" de %d\n", ano);

    system("PAUSE");
    return 0;
}
