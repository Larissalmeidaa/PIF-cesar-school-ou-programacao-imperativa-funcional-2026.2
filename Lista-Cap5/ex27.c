/* Questão 27. Conversor de Temperaturas Modular — Crie as funções celsiusParaFahrenheit,
celsiusParaKelvin, fahrenheitParaCelsius e kelvinParaCelsius, todas com parâmetro e retorno
float. Na main(), apresente um menu, leia a escolha e a temperatura e exiba o valor convertido
com duas casas decimais usando a função correspondente.
*/

#include <stdio.h>

// protótipos
float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main()
{
    int opcao;
    float temp;

    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4)
    {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    switch (opcao)
    {
    case 1:
        printf("%.2f C = %.2f F\n", temp, celsiusParaFahrenheit(temp));
        break;
    case 2:
        printf("%.2f C = %.2f K\n", temp, celsiusParaKelvin(temp));
        break;
    case 3:
        printf("%.2f F = %.2f C\n", temp, fahrenheitParaCelsius(temp));
        break;
    case 4:
        printf("%.2f K = %.2f C\n", temp, kelvinParaCelsius(temp));
        break;
    }

    return 0;
}

// C -> F
float celsiusParaFahrenheit(float c)
{
    return c * 9 / 5 + 32;
}

// C -> K
float celsiusParaKelvin(float c)
{
    return c + 273.15;
}

// F -> C
float fahrenheitParaCelsius(float f)
{
    return (f - 32) * 5 / 9;
}

// K -> C
float kelvinParaCelsius(float k)
{
    return k - 273.15;
}
