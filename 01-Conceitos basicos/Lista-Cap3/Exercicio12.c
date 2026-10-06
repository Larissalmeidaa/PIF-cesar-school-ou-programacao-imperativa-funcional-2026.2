/*Questão 12. Tabela de Conversão de Temperaturas (Celsius, Fahrenheit e Kelvin) — Crie um
programa que imprima uma tabela de conversão de temperaturas de 0°C a 100°C, com variação de 5
em 5 graus Celsius. Para cada valor em Celsius, o programa deve calcular e exibir os valores
equivalentes em Fahrenheit (F = (9*C)/5 + 32) e Kelvin (K = C + 273.15), utilizando formatação
alinhada com duas casas decimais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit, kelvin;

    printf("%10s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("%10s %12s %10s\n", "-------", "----------", "------");

    for (celsius = 0; celsius <= 100; celsius += 5)
    {
        fahrenheit = (9 * celsius) / 5 + 32;
        kelvin = celsius + 273.15;

        printf("%10.2f %12.2f %10.2f\n", celsius, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}