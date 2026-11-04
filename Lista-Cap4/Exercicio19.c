/*Questão 19. Validação de Condição de Existência e Tipo de Triângulo — Crie um programa em C
que leia três valores reais A, B e C representando os lados de um triângulo. O programa deve
primeiramente verificar a condição de existência: cada lado deve ser menor que a soma dos outros dois
(A < B + C e B < A + C e C < A + B). Caso seja um triângulo válido, classifique-o em:
• Equilátero: todos os três lados iguais;
• Isósceles: quaisquer dois lados iguais;
• Escaleno: todos os três lados diferentes.
Se os lados não formarem um triângulo, exiba 'Erro: Os lados fornecidos não formam um triângulo!'.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    // condicao de existencia: cada lado menor que a soma dos outros dois
    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
            printf("Triangulo Equilatero\n");
        else if (a == b || a == c || b == c)
            printf("Triangulo Isosceles\n");
        else
            printf("Triangulo Escaleno\n");
    }
    else
        printf("Erro: Os lados fornecidos nao formam um triangulo!\n");

    system("PAUSE");
    return 0;
}
