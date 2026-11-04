/*Questão 15. Verificação de Elegibilidade para Aposentadoria — Elabore um programa que leia a
idade e o tempo de serviço (em anos) de um trabalhador. O programa deve informar se o trabalhador
pode ou não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos de idade;
• OU ter trabalhado pelo menos 30 anos;
• OU ter pelo menos 60 anos de idade E ter trabalhado pelo menos 25 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, tempo;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de servico (anos): ");
    scanf("%d", &tempo);

    // basta uma das tres condicoes ser verdadeira
    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25))
        printf("Pode se aposentar.\n");
    else
        printf("Ainda nao pode se aposentar.\n");

    system("PAUSE");
    return 0;
}
