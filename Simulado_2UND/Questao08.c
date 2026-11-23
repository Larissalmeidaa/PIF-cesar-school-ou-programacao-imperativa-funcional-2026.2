/* Questão 08. Funções Recursivas: Soma de Dígitos e Potência (Cap. 5) — Implemente, de
forma recursiva, as funções int somaDigitos(int n), que devolve a soma dos algarismos de n
(por exemplo, 1234 resulta em 10), e long potencia(int base, int exp), que calcula base
elevado a exp sem usar pow(). Na main(), leia os valores necessários e exiba os resultados.
*/

#include <stdio.h>

int somaDigitos(int n);
long potencia(int base, int exp);

int main()
{
    int n, base, exp;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Soma dos digitos de %d: %d\n", n, somaDigitos(n));

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (>= 0): ");
    scanf("%d", &exp);

    if (exp < 0)
        printf("Expoente invalido.\n");
    else
        printf("%d elevado a %d = %ld\n", base, exp, potencia(base, exp));

    return 0;
}

// soma os algarismos de n recursivamente
int somaDigitos(int n)
{
    if (n < 0)
        return somaDigitos(-n);
    if (n < 10)               // caso base: um unico digito
        return n;
    return n % 10 + somaDigitos(n / 10);
}

// calcula base^exp recursivamente
long potencia(int base, int exp)
{
    if (exp == 0)             // caso base
        return 1;
    return base * potencia(base, exp - 1);
}
