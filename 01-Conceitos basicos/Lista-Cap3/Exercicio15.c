/*Questão 15. Filtragem Numérica Simultânea com Operadores Lógicos — Criar um programa em C
que solicite ao usuário um número limite inteiro positivo NUM. Em seguida, o programa deve imprimir
todos os números no intervalo fechado de 1 até NUM que sejam múltiplos de 3 e de 5 ao mesmo
tempo (por exemplo: 15, 30, 45, ...). Caso nenhum número satisfaça a condição, informe o usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;

    printf("Digite um numero limite positivo: ");
    scanf("%d", &num);

    for (i = 15; i <= num; i += 15)
        printf("%d ", i);

    printf(num < 15 ? "Nenhum numero no intervalo e multiplo de 3 e de 5 ao mesmo tempo." : "");
    printf("\n");

    system("PAUSE");
    return 0;
}