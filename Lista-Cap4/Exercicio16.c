/*Questão 16. Classificação de Eficiência de Consumo de Combustível — Faça um programa que leia
a distância percorrida por um veículo em km (float) e a quantidade de litros de gasolina consumidos
(float). Calcule o consumo em km/l e exiba a mensagem apropriada:
• Consumo < 8.0 km/l: 'Venda o carro!'
• Consumo entre 8.0 e 14.0 km/l: 'Econômico!'
• Consumo > 14.0 km/l: 'Super econômico!'
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia, litros, consumo;

    printf("Distancia percorrida (km): ");
    scanf("%f", &distancia);
    printf("Litros consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0)
        printf("Venda o carro!\n");
    else if (consumo <= 14.0)
        printf("Economico!\n");
    else
        printf("Super economico!\n");

    system("PAUSE");
    return 0;
}
