/*Questão 11. Ordenação Crescente de Três Valores Numéricos — Escreva um programa em C que
leia três números inteiros fornecidos pelo usuário e os exiba em ordem estritamente crescente (do
menor para o maior). Utilize estruturas de decisão para comparar e ordenar os valores sem usar
vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, aux;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    // troca os valores ate que a <= b <= c
    if (a > b) { aux = a; a = b; b = aux; }
    if (a > c) { aux = a; a = c; c = aux; }  // agora a e o menor
    if (b > c) { aux = b; b = c; c = aux; }  // agora c e o maior

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    system("PAUSE");
    return 0;
}
