/*Questão 09. Cálculo de Média Ponderada e Situação Acadêmica — Elabore um programa que leia
as notas de três avaliações de um estudante: Trabalho de Laboratório (peso 2), Avaliação Semestral
(peso 3) e Exame Final (peso 5). O programa deve calcular a média ponderada e exibir a situação do
aluno conforme a tabela:
• Média entre 0.0 e 2.9: Reprovado
• Média entre 3.0 e 4.9: Em Recuperação
• Média igual ou superior a 5.0: Aprovado
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lab, semestral, exame, media;

    printf("Nota do Trabalho de Laboratorio: ");
    scanf("%f", &lab);
    printf("Nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final: ");
    scanf("%f", &exame);

    // pesos 2, 3 e 5 (soma dos pesos = 10)
    media = (lab * 2 + semestral * 3 + exame * 5) / 10;
    printf("Media ponderada: %.1f\n", media);

    if (media < 3.0)
        printf("Reprovado\n");
    else if (media < 5.0)
        printf("Em Recuperacao\n");
    else
        printf("Aprovado\n");

    system("PAUSE");
    return 0;
}
