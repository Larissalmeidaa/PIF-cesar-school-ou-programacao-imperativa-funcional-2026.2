/* Questão 08. Conversor de Fahrenheit para Celsius — Desenvolva um programa que leia
uma temperatura em graus Fahrenheit e utilize uma função float celsius(float fahr) para
convertê-la, aplicando a fórmula C = (F - 32) * 5 / 9. Exiba o resultado com duas casas
decimais.
*/

#include <stdio.h>

float celsius(float fahr); // protótipo

int main()
{
    float f;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    printf("%.2f F = %.2f C\n", f, celsius(f));

    return 0;
}

// converte Fahrenheit para Celsius
float celsius(float fahr)
{
    return (fahr - 32) * 5 / 9;
}
