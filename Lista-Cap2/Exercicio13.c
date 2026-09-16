/*Questão 13. Cálculo de Áreas de Figuras Planas Básicas — Crie um programa unificado em C
que ofereça suporte ao cálculo de três geometrias fundamentais. O usuário deve fornecer os dados
necessários e o programa exibirá: a) A área de um quadrado de lado L; b) A área de um retângulo
de base B e altura H; c) A área de um triângulo retângulo de base B e altura H. Todos os valores
de entrada e saída devem ser numéricos de ponto flutuante.
*/

#include <stdio.h>

int main()
{
    float lado, areaQuadrado;
    float baseRetangulo, alturaRetangulo, areaRetangulo;
    float baseTriangulo, alturaTriangulo, areaTriangulo;

    /* a) Area do quadrado */
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    areaQuadrado = lado * lado;

    /* b) Area do retangulo */
    printf("Digite a base do retangulo: ");
    scanf("%f", &baseRetangulo);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &alturaRetangulo);
    areaRetangulo = baseRetangulo * alturaRetangulo;

    /* c) Area do triangulo retangulo */
    printf("Digite a base do triangulo: ");
    scanf("%f", &baseTriangulo);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &alturaTriangulo);
    areaTriangulo = (baseTriangulo * alturaTriangulo) / 2.0;

    printf("\n--- Resultados ---\n");
    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo: %.2f\n", areaTriangulo);

    return 0;
}
