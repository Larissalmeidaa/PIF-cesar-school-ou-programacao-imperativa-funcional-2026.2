/*Questão 12. Operadores Unários de Antecessor e Sucessor — Elabore um programa em C que
receba um número inteiro do usuário e, utilizando exclusivamente os operadores unários de
incremento (++) e decremento (--), exiba o seu antecessor e o seu sucessor no console,
justificando sua implementação lógica.
*/

#include <stdio.h>

int main()
{
    int numero, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    antecessor = numero; // copia o valor do numero
    antecessor--; //agora decrementa a cópia, não o número original

    sucessor = numero;
    sucessor++;

    printf("Antecessor: %d\n", antecessor);
    printf("Numero digitado: %d\n", numero);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
