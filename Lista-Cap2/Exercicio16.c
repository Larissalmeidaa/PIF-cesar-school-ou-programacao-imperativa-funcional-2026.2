/*Questão 16. Quantidade de Degraus em uma Escada de Obra — Um trabalhador da construção
civil deseja subir uma escada de degraus idênticos. Escreva um programa em C que receba do
usuário a altura de cada degrau (em centímetros) e a altura total que o usuário deseja alcançar
subindo a escada (em metros). O programa deve calcular e exibir o número mínimo de degraus
que ele deve subir. Certifique-se de realizar a compatibilidade de unidades de medida (metros vs.
centímetros).
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double alturaDegrauCm, alturaTotalM;
    double alturaTotalCm;
    int numeroDegraus;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%lf", &alturaDegrauCm);

    printf("Digite a altura total a alcancar (m): ");
    scanf("%lf", &alturaTotalM);

    alturaTotalCm = alturaTotalM * 100;   // converte metros para centimetros

    numeroDegraus = (int) ceil(alturaTotalCm / alturaDegrauCm);

    printf("Numero minimo de degraus: %d\n", numeroDegraus);

    return 0;
}