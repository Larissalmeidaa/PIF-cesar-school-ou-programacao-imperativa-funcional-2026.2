/* Questão 26. Sequência de Fibonacci Recursiva (questão avançada) — Desenvolva uma
função recursiva long fibonacci(int n) que retorne o n-ésimo termo da sequência (fibonacci(0)
= 0 e fibonacci(1) = 1). Na main(), leia a quantidade de termos e imprima a sequência
chamando a função em um laço. Comente por que a versão recursiva se torna lenta para
valores grandes de n.
*/

#include <stdio.h>

long fibonacci(int n); // protótipo

int main()
{
    int qtd, i;

    printf("Quantos termos? ");
    scanf("%d", &qtd);

    if (qtd <= 0)
    {
        printf("Quantidade invalida!\n");
        return 0;
    }

    for (i = 0; i < qtd; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");

    return 0;
}

// devolve o n-ésimo termo de Fibonacci
long fibonacci(int n)
{
    // caso base: fib(0) = 0 e fib(1) = 1
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // passo recursivo: fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Por que fica lenta:
   Cada chamada abre DUAS novas chamadas, e elas repetem o mesmo trabalho.
   Ex.: fib(5) chama fib(4) e fib(3); mas fib(4) também chama fib(3) de novo,
   e assim por diante. O número de chamadas cresce quase dobrando a cada n
   (crescimento exponencial). Para n = 40 já são centenas de milhões de chamadas.
   Uma versão com laço (guardando os dois últimos termos) faz só n passos.
*/
