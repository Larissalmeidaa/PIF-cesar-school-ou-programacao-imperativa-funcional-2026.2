/*Questão 28. Sistema de Atendimento Automático Bancário (SAC) — Crie um programa em C que
simule a URA (Unidade de Resposta Audível) de um banco. O programa apresenta o menu:
1 - Consultar Saldo
2 - Efetuar Extrato
3 - Fazer Transferência
4 - Falar com Atendente
O programa lê a opção digitada e, utilizando a estrutura switch-case, exibe a mensagem de
direcionamento correspondente para cada opção. Trate opções inválidas com default.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferencia\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1: printf("Direcionando para a consulta de saldo...\n"); break;
        case 2: printf("Direcionando para o extrato...\n"); break;
        case 3: printf("Direcionando para a transferencia...\n"); break;
        case 4: printf("Aguarde, voce sera transferido para um atendente...\n"); break;
        default: printf("Opcao invalida! Tente novamente.\n");
    }

    system("PAUSE");
    return 0;
}
