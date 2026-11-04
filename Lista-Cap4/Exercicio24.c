/*Questão 24. Classificação de Triângulos quanto aos Ângulos Internos — Faça um programa que
leia três valores inteiros representando os ângulos internos de um triângulo. Valide se a soma dos
ângulos é exatamente igual a 180°. Se for um triângulo válido, classifique-o em:
• Retângulo: possui um ângulo igual a 90°;
• Obtusângulo: possui um ângulo maior que 90°;
• Acutângulo: possui todos os três ângulos menores que 90°.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1, a2, a3;

    printf("Digite os tres angulos: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 + a2 + a3 != 180 || a1 <= 0 || a2 <= 0 || a3 <= 0)
        printf("Erro: nao e um triangulo valido!\n");
    else if (a1 == 90 || a2 == 90 || a3 == 90)
        printf("Triangulo Retangulo\n");
    else if (a1 > 90 || a2 > 90 || a3 > 90)
        printf("Triangulo Obtusangulo\n");
    else
        printf("Triangulo Acutangulo\n");  // sobrou: todos menores que 90

    system("PAUSE");
    return 0;
}
