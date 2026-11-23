/* Questão 24. Compilação Condicional para Depuração — Escreva um programa com uma
função int somaAteN(int n) que some os inteiros de 1 até n com um laço. Use #ifdef DEBUG
para imprimir, dentro do laço, o valor parcial da soma a cada iteração. Compile duas vezes,
com e sem #define DEBUG, e documente em comentários a diferença de comportamento.
*/

#include <stdio.h>

// tire o comentário da linha abaixo para compilar no modo de depuração
// #define DEBUG

int somaAteN(int n); // protótipo

int main()
{
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    printf("Soma de 1 ate %d = %d\n", n, somaAteN(n));

    return 0;
}

// soma os inteiros de 1 até n
int somaAteN(int n)
{
    int soma = 0, i;

    for (i = 1; i <= n; i++)
    {
        soma = soma + i;
#ifdef DEBUG
        printf("[DEBUG] i = %d, soma parcial = %d\n", i, soma);
#endif
    }

    return soma;
}

/* Diferença de comportamento (testado com n = 5):

   SEM #define DEBUG (linha comentada):
   o pré-processador apaga o printf de dentro do #ifdef, então só aparece:
       Digite n: 5
       Soma de 1 ate 5 = 15

   COM #define DEBUG (linha descomentada, ou compilando com gcc -DDEBUG):
   o printf fica no código e mostra a soma a cada volta do laço:
       Digite n: 5
       [DEBUG] i = 1, soma parcial = 1
       [DEBUG] i = 2, soma parcial = 3
       [DEBUG] i = 3, soma parcial = 6
       [DEBUG] i = 4, soma parcial = 10
       [DEBUG] i = 5, soma parcial = 15
       Soma de 1 ate 5 = 15

   O resultado final é o mesmo; só muda o que é impresso. A escolha é feita na
   compilação, não durante a execução.
*/
