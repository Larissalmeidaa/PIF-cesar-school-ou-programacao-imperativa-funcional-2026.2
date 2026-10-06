/*Questão 07. Contagem Progressiva em Três Versões (for, while, do-while) — Desenvolva três
programas independentes (ou três funções no mesmo arquivo) que mostrem na tela os números
inteiros de 0 a 100 em ordem crescente. A primeira versão deve utilizar obrigatoriamente o laço for, a
segunda versão a estrutura while, e a terceira versão a estrutura do-while. Em comentário ao final do
código, responda: qual das três estruturas é a mais adequada para este caso e por quê?
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    /* Versao 1: for */
    printf("Versao com for:\n");
    for (i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n\n");

    /* Versao 2: while */
    printf("Versao com while:\n");
    i = 0;
    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    /* Versao 3: do-while */
    printf("Versao com do-while:\n");
    i = 0;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    /*
     * Qual eh a mais adequada? O laco for.
     * Porque o numero de repeticoes eh conhecido (de 0 a 100, sempre 101 voltas)
     * e a contagem usa um contador simples. O for junta inicializacao, teste e
     * incremento numa linha so, deixando o controle do laco visivel de uma vez
     * e evitando esquecer o i++ (o que causaria laco infinito no while/do-while).
     * O do-while seria menos adequado porque nao precisamos garantir uma
     * execucao antes do teste, e o while funcionaria, mas espalha o controle
     * do contador por varias linhas.
     */

    system("PAUSE");
    return 0;
}