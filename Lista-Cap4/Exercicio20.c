/*Questão 20. Resolução da Equação do Segundo Grau (Fórmula de Bhaskara) — Desenvolva um
programa em C para calcular as raízes de uma equação do segundo grau ax² + bx + c = 0. O programa
lê os coeficientes a, b e c (garantindo a != 0). Calcule o delta (Δ = b² - 4ac) e exiba o resultado
apropriado:
• Se Δ < 0: 'A equação não possui raízes reais.'
• Se Δ == 0: Calcule e exiba a raiz única x = -b / (2a).
• Se Δ > 0: Calcule e exiba as duas raízes reais distintas x1 e x2 usando sqrt().
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Erro: a nao pode ser zero.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0)
        printf("A equacao nao possui raizes reais.\n");
    else if (delta == 0)
        printf("Raiz unica: x = %.2f\n", -b / (2 * a));
    else
    {
        printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
    }

    system("PAUSE");
    return 0;
}
