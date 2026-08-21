/*Questão 28. Desenvolva um programa em C que leia três valores numéricos inteiros fornecidos
pelo usuário através do teclado, calcule a média aritmética simples desses valores como um
número real de dupla precisão (double) e exiba o resultado final na tela formatado com
exatamente duas casas decimais.

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    double media;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (a + b + c) / 3.0;

    printf("A media e: %.2f\n", media);

    return 0;
    

}
