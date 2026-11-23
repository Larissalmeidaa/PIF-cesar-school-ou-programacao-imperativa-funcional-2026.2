/* Questão 09. Maior de Dois Números — Crie uma função int maior(int a, int b) que retorne o
maior entre dois inteiros. Na main(), leia os valores e exiba o resultado.
*/

#include <stdio.h>

int maior(int a, int b); // protótipo

int main()
{
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Maior: %d\n", maior(n1, n2));

    return 0;
}

// devolve o maior entre a e b (se forem iguais, devolve qualquer um)
int maior(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
