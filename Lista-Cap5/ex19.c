/* Questão 19. Contagem Regressiva Recursiva — Crie um procedimento recursivo void
contagem(int n) que imprima os números de n até 1 e, ao final, a mensagem "Fogo!". Na
main(), leia n, valide que ele é positivo e chame o procedimento. Em seguida, crie uma
segunda versão que imprima de 1 até n, e explique em comentário o que muda na posição da
chamada recursiva em relação ao printf.
*/

#include <stdio.h>

// protótipos
void contagem(int n);
void contagemCrescente(int n);

int main()
{
    int n;

    printf("Digite um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Numero invalido! Precisa ser positivo.\n");
        return 0;
    }

    printf("Contagem regressiva:\n");
    contagem(n);

    printf("Contagem crescente:\n");
    contagemCrescente(n);

    return 0;
}

// imprime de n até 1 e depois "Fogo!"
void contagem(int n)
{
    // caso base: chegou em 0, terminou a contagem
    if (n == 0)
    {
        printf("Fogo!\n");
        return;
    }

    // passo recursivo: imprime PRIMEIRO e depois chama com n-1
    printf("%d\n", n);
    contagem(n - 1);
}

// imprime de 1 até n
void contagemCrescente(int n)
{
    // caso base: nada para imprimir
    if (n == 0)
        return;

    // passo recursivo: chama PRIMEIRO e só depois imprime
    contagemCrescente(n - 1);
    printf("%d\n", n);
}

/* O que muda:
   - Na contagem(), o printf vem ANTES da chamada recursiva. Então cada chamada
     imprime o seu n na hora em que é empilhada: n, n-1, ..., 1 (ordem decrescente).
   - Na contagemCrescente(), a chamada recursiva vem ANTES do printf. As chamadas
     vão sendo empilhadas sem imprimir nada até chegar no 0; o printf só roda
     na volta (desempilhamento), começando pela chamada mais interna: 1, 2, ..., n.
*/
