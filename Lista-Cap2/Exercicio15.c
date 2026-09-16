/*Questão 15. Cálculo de Média Aritmética Simples e Ponderada — Desenvolva um programa
que leia quatro notas escolares de um aluno. Calcule e exiba no console: a) A média aritmética
simples das notas; b) A média ponderada das notas, assumindo que as provas possuem os
seguintes pesos sequenciais: Peso 1 para as provas 1 e 2, e Peso 2 para as provas 3 e 4. Ambos
os resultados devem ser representados com duas casas decimais.
*/

#include <stdio.h>

int main()
{
    double nota1, nota2, nota3, nota4;
    double mediaSimples, mediaPonderada;
    double somaPesos;

    printf("Digite a nota 1: ");
    scanf("%lf", &nota1);
    printf("Digite a nota 2: ");
    scanf("%lf", &nota2);
    printf("Digite a nota 3: ");
    scanf("%lf", &nota3);
    printf("Digite a nota 4: ");
    scanf("%lf", &nota4);

    /* a) Media aritmetica simples */
    mediaSimples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    /* b) Media ponderada: peso 1 para notas 1 e 2, peso 2 para notas 3 e 4 */
    somaPesos = 1 + 1 + 2 + 2;  /* soma total dos pesos = 6 */
    mediaPonderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / somaPesos;

    printf("\nMedia aritmetica simples: %.2f\n", mediaSimples);
    printf("Media ponderada: %.2f\n", mediaPonderada);

    return 0;
}