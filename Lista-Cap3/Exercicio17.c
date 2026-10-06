/*Questão 17. Estatísticas de Turma (Menor, Maior, Média e Contagem) — Faça um programa para
ler uma sequência de notas de alunos (valores reais de 0.0 a 10.0). A entrada de dados deve ser
encerrada quando o usuário digitar a nota '-1.0'. Ao final, o programa deve exibir:
a) Total de alunos avaliados;
b) A maior nota da turma;
c) A menor nota da turma;
d) A média geral da turma.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota, soma = 0, media;
    float maior = 0, menor = 10;
    int total = 0;

    printf("Digite uma nota (-1 para encerrar): ");
    scanf("%f", &nota);

    while (nota >= 0)
    {
        soma += nota;
        total++;

        maior = nota > maior ? nota : maior;
        menor = nota < menor ? nota : menor;

        printf("Digite uma nota (-1 para encerrar): ");
        scanf("%f", &nota);
    }

    media = soma / (total > 0 ? total : 1);

    printf(total > 0 ? "\nTotal de alunos: %d\nMaior nota: %.1f\nMenor nota: %.1f\nMedia geral: %.2f\n"
                     : "\nNenhuma nota foi digitada.\n",
           total, maior, menor, media);

    system("PAUSE");
    return 0;
}