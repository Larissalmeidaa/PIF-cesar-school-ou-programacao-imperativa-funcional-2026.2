/*Questão 09. Operações Aritméticas Básicas e Cast de Tipos — Escreva um programa em C que
solicite e leia dois números inteiros do usuário. O programa deve calcular e exibir os resultados
das quatro operações aritméticas básicas (soma, subtração, multiplicação e divisão real). Certifique-
se de que o resultado da divisão seja exibido com duas casas decimais e trate de forma explícita a
divisão real sem perdas de precisão (divisão inteira). Adicione um comentário informando como
evitaria matematicamente a divisão por zero neste capítulo.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int soma, subtracao, multiplicacao;
    double divisao;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = (double) a / b;   // cast explícito evita divisão inteira / perda de precisão

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    

    return 0;
}
