/* Questão 14. Soma dos Dígitos com Recursão — Crie uma função recursiva int
somaDigitos(int n) que retorne a soma dos dígitos de um inteiro positivo (exemplo: 1234
resulta em 10). Dica: use os operadores % e / para separar o último dígito. Na main(), leia o
número e exiba o resultado. Indique em comentário o caso base e o passo recursivo.
*/

#include <stdio.h>

int somaDigitos(int n); // protótipo

int main()
{
    int numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0)
        printf("O numero precisa ser positivo!\n");
    else
        printf("Soma dos digitos de %d: %d\n", numero, somaDigitos(numero));

    return 0;
}

// soma os dígitos de n usando recursão
int somaDigitos(int n)
{
    // caso base: número de um dígito só, a soma é ele mesmo
    if (n < 10)
        return n;

    // passo recursivo: último dígito (n % 10) + soma dos dígitos do resto (n / 10)
    return n % 10 + somaDigitos(n / 10);
}
