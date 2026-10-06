/*Questão 19. Cálculo do N-ésimo Termo da Sequência de Fibonacci — A sequência de Fibonacci é
dada por: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... onde cada termo a partir do terceiro é a soma dos dois
anteriores. Escreva um programa que solicite ao usuário o número do termo desejado (N) e calcule e
imprima o valor correspondente desse termo, além de listar todos os termos até N.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &n);

    printf("Termos ate N: ");
    for (i = 1; i <= n; i++)
    {
        printf("%lld ", anterior);

        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("\nO termo %d da sequencia e: %lld\n", n, anterior);

    system("PAUSE");
    return 0;
}