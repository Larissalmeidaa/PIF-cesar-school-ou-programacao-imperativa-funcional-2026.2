/*Questão 06. Comportamento e Precedência dos Incrementos — O comportamento de
incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na
Linguagem C. Analise os dois trechos de código independentes abaixo e responda:

// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);

// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);

a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o
pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?
b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas
vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique
por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do
compilador adotado (comportamento indefinido).


RESPOSTAS
a) O operador pré-fixado (++ antes da variável) incrementa o valor primeiro, e só depois usa esse valor já atualizado na atribuição.
b), n+1 e n++ aparecem juntos na mesma chamada de printf() —
 ou seja, n é lido e modificado (pelo n++) na mesma instrução. 
 O C não define a ordem em que os argumentos de uma função são avaliados, então o compilador pode calcular esses três valores em qualquer ordem.*/

#include <stdio.h>

int main()
{
    int n = 5;
    int x = ++n;

    int m = 5;
    int y = m++;
    printf("Trecho A: n = %d, x = %d\n", n, x);
    printf("Trecho B: m = %d, y = %d\n", m, y);


    return 0;
}
