/*Questão 18. Conversor Multidirecional de Escalas Termométricas — Desenvolva um programa que
apresente um menu de opções de conversão de temperatura:
1. Celsius para Fahrenheit (F = C * 1.8 + 32)
2. Celsius para Kelvin (K = C + 273.15)
3. Fahrenheit para Celsius (C = (F - 32) / 1.8)
4. Kelvin para Celsius (C = K - 273.15)
O programa deve ler a escolha do usuário via switch-case, solicitar a temperatura de entrada e exibir o
valor convertido com duas casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float temp;

    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    printf("Temperatura: ");
    scanf("%f", &temp);

    switch (opcao)
    {
        case 1: printf("%.2f F\n", temp * 1.8 + 32); break;
        case 2: printf("%.2f K\n", temp + 273.15); break;
        case 3: printf("%.2f C\n", (temp - 32) / 1.8); break;
        case 4: printf("%.2f C\n", temp - 273.15); break;
        default: printf("Opcao invalida!\n");
    }

    system("PAUSE");
    return 0;
}
