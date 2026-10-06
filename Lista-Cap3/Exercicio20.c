/*Questão 20. Tabela de Caracteres ASCII e Códigos Hexadecimais — Escreva um programa que
utilize um laço for para imprimir a tabela de caracteres da tabela ASCII para os códigos decimais
compreendidos entre 32 e 126 (caracteres imprimíveis). Para cada código, imprima o valor em decimal,
o valor equivalente em hexadecimal (usando o formatador %X) e o próprio caractere visível.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Dec\tHex\tChar\n");
    printf("---\t---\t----\n");

    for (codigo = 32; codigo <= 126; codigo++)
        printf("%d\t%X\t%c\n", codigo, codigo, codigo);

    system("PAUSE");
    return 0;
}