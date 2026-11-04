/*Questão 12. Dia da Semana com Comando switch-case — Desenvolva um programa em C que leia
um número inteiro de 1 a 7 e imprima o dia da semana correspondente (1 = Domingo, 2 = Segunda-
feira, ..., 7 = Sábado). Caso o usuário digite um número fora do intervalo [1, 7], o programa deve exibir
'Erro: Opção Inválida!' através da cláusula default.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terca-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sabado\n"); break;
        default: printf("Erro: Opcao Invalida!\n");
    }

    system("PAUSE");
    return 0;
}
