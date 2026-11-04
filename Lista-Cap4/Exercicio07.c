/*Questão 07. Raiz Quadrada ou Quadrado de um Número Real — Escreva um programa em C que
leia um número real. Se o número for positivo ou igual a zero, calcule e imprima a sua raiz quadrada
(utilizando a função sqrt() da biblioteca <math.h>). Caso o número seja negativo, imprima o quadrado
desse número (x²).
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float numero;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    // positivo ou zero: raiz quadrada; negativo: quadrado
    if (numero >= 0)
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    else
        printf("Quadrado: %.2f\n", numero * numero);

    system("PAUSE");
    return 0;
}
