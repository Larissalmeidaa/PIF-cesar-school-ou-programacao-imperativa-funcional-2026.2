/* Questão 18. Potência com Recursão — Implemente a função recursiva long potencia(int
base, int expoente), que calcule base elevado ao expoente (inteiro não negativo) sem usar
pow(). Na main(), leia a base e o expoente, valide com if que o expoente não é negativo e
exiba o resultado. Indique em comentário o caso base e o passo recursivo.
*/

#include <stdio.h>

long potencia(int base, int expoente); // protótipo

int main()
{
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0)
        printf("Expoente invalido! Precisa ser >= 0.\n");
    else
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

// calcula base^expoente com recursão
long potencia(int base, int expoente)
{
    // caso base: qualquer número elevado a 0 é 1
    if (expoente == 0)
        return 1;

    // passo recursivo: base^exp = base * base^(exp-1)
    return base * potencia(base, expoente - 1);
}
