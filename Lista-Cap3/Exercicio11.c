/*Questão 11. Intervalo Numérico Dinâmico (Crescente e Decrescente) — Escreva um programa que
leia dois números inteiros quaisquer, A e B, fornecidos pelo usuário. O programa deve imprimir todos
os números inteiros situados no intervalo fechado entre A e B. Se A for menor ou igual a B, a
impressão deve ser em ordem crescente; caso A seja maior que B, a impressão deve ser em ordem
decrescente.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, passo;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    passo = (a <= b) ? 1 : -1;

    for (i = a; i != b + passo; i += passo)
        printf("%d ", i);
    printf("\n");

    system("PAUSE");
    return 0;
}