/*Questão 27. Tarifador de Estacionamento com Faixas Progressivas — Um estacionamento cobra
tarifação progressiva conforme o tempo de permanência do veículo. Escreva um programa em C que
leia o número de horas inteiras que o carro permaneceu no local e calcule o valor total do ticket:
• 1ª e 2ª hora: R$ 2,00 por hora;
• 3ª e 4ª hora: R$ 2,50 por hora;
• 5ª hora em diante: R$ 3,00 por hora adicional.
Exiba o tempo total e o valor final cobrado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    float valor;

    printf("Horas de permanencia: ");
    scanf("%d", &horas);

    // soma o preco de cada faixa que o carro "ocupou"
    if (horas <= 2)
        valor = horas * 2.00;
    else if (horas <= 4)
        valor = 2 * 2.00 + (horas - 2) * 2.50;
    else
        valor = 2 * 2.00 + 2 * 2.50 + (horas - 4) * 3.00;

    printf("Tempo: %d hora(s)\n", horas);
    printf("Valor: R$ %.2f\n", valor);

    system("PAUSE");
    return 0;
}
