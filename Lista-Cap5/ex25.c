/* Questão 25. Máximo Divisor Comum com Recursão (questão avançada) — Implemente o
algoritmo de Euclides em uma função recursiva int mdc(int a, int b). Na main(), leia dois
inteiros positivos e exiba o MDC. Utilize a função em um procedimento void simplifica(int
num, int den) que imprima a fração simplificada.
*/

#include <stdio.h>

// protótipos
int mdc(int a, int b);
void simplifica(int num, int den);

int main()
{
    int a, b;

    printf("Digite dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0)
    {
        printf("Os numeros precisam ser positivos!\n");
        return 0;
    }

    printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
    simplifica(a, b);

    return 0;
}

// MDC pelo algoritmo de Euclides
int mdc(int a, int b)
{
    // caso base: quando b chega em 0, o MDC é a
    if (b == 0)
        return a;

    // passo recursivo: mdc(a, b) = mdc(b, resto de a por b)
    return mdc(b, a % b);
}

// imprime a fração num/den simplificada
void simplifica(int num, int den)
{
    int divisor = mdc(num, den);

    printf("Fracao %d/%d simplificada: %d/%d\n", num, den, num / divisor, den / divisor);
}
