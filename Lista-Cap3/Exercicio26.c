/*Questão 26. Mapeamento e Soma de Primos em um Intervalo Fechado [A, B] — Desenvolva um
programa que solicite ao usuário dois números inteiros positivos A e B (garantindo A < B). O programa
deve encontrar e listar todos os números primos situados no intervalo fechado [A, B], e ao final exibir a
soma total de todos os primos encontrados nesse intervalo.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, num, i;
    int divisores, primo;
    int soma = 0;

    do
    {
        printf("Digite A e B (positivos, com A < B): ");
        scanf("%d %d", &a, &b);
    } while (a < 1 || a >= b);

    printf("Primos entre %d e %d: ", a, b);

    for (num = a; num <= b; num++)
    {
        divisores = 0;

        for (i = 1; i <= num; i++)
            divisores += (num % i == 0);

        primo = (divisores == 2);

        printf(primo ? "%d " : "", num);
        soma += primo * num;
    }

    printf("\nSoma dos primos: %d\n", soma);

    system("PAUSE");
    return 0;
}