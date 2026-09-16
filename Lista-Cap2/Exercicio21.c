/*Questão 21. Leitura de Caractere e Exibição de seu Código ASCII — A tabela ASCII associa
cada caractere a um valor inteiro único de 1 byte. Desenvolva um programa em C que leia um
caractere do teclado informado pelo usuário e exiba na tela esse mesmo caractere formatado como
um número inteiro. Escreva uma breve explicação em comentários no seu código sobre o que esse
número representa.
*/

#include <stdio.h>

int main()
{
    char letra;

    printf("Digite um caractere: ");
    scanf(" %c", &letra);

    // O numero exibido eh o codigo ASCII do caractere digitado.
    // Todo char eh guardado na memoria como um numero (1 byte),
    // e a tabela ASCII define qual numero corresponde a qual simbolo.
    printf("Codigo ASCII: %d\n", letra);

    return 0;
}