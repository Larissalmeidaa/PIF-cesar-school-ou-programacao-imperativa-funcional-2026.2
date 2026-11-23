/* Questão 10. Área da Esfera com #define — Escreva um programa que leia o raio de uma
esfera e calcule sua área por meio de uma função float area(float r), usando a fórmula 4 * PI *
r * r. Defina PI com a diretiva #define e declare o protótipo da função antes da main().
*/

#include <stdio.h>

#define PI 3.14159

float area(float r); // protótipo

int main()
{
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    if (raio < 0)
        printf("Raio invalido!\n");
    else
        printf("Area da esfera: %.2f\n", area(raio));

    return 0;
}

// calcula a área da superfície da esfera
float area(float r)
{
    return 4 * PI * r * r;
}
