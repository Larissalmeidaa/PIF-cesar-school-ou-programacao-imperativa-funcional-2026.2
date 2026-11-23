/* Questão 07. Soma de Dois Inteiros — Escreva um programa em C que leia dois números
inteiros e utilize uma função int soma(int a, int b) para calcular e retornar a soma. O resultado
deve ser impresso na main(). Declare o protótipo antes da main().
*/

#include <stdio.h>

int soma(int a, int b); // protótipo

int main()
{
    int n1, n2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    resultado = soma(n1, n2);
    printf("Soma: %d\n", resultado);

    return 0;
}

// devolve a soma de a e b
int soma(int a, int b)
{
    return a + b;
}
