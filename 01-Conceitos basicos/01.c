//Atividade assíncrona: escrever um programa que pede a idade do usuário e imprime se é maior ou menor de idade (if/else simples). Conteúdo: funções printf e scanf, estruturas de decisão (if, else, else if, switch), operadores relacionais e lógicos.
#include <stdio.h>

int main() 
{
    // Write C code here
    int idade = 0;
    
    printf("Digite sua idade:\n");
    scanf ("%d", &idade);
    if (idade >= 18)
    {
    printf ("Maior de idade!");
        
    } else 
    {
        printf("Menor de idade!");
    }

    return 0;
}