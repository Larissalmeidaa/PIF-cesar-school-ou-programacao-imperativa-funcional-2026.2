/* Questão 15. Lista de Convidados (Matriz de Strings) (Cap. 7) — Declare char convidados[5]
[30] e leia o nome de 5 convidados. Em seguida, leia um nome e, usando strcmp(), informe se
ele está na lista e em qual posição (de 1 a 5).
*/

#include <stdio.h>
#include <string.h>

#define QTD 5

// le uma linha e remove o '\n' que o fgets guarda
void lerLinha(char s[], int tam)
{
    fgets(s, tam, stdin);
    s[strcspn(s, "\n")] = '\0';
}

int main()
{
    char convidados[QTD][30];
    char nome[30];
    int i, posicao = 0;

    for (i = 0; i < QTD; i++)
    {
        printf("Nome do convidado %d: ", i + 1);
        lerLinha(convidados[i], 30);
    }

    printf("\nDigite o nome a procurar: ");
    lerLinha(nome, 30);

    for (i = 0; i < QTD; i++)
    {
        if (strcmp(convidados[i], nome) == 0)
        {
            posicao = i + 1;
            break;
        }
    }

    if (posicao)
        printf("%s esta na lista, na posicao %d.\n", nome, posicao);
    else
        printf("%s nao esta na lista.\n", nome);

    return 0;
}
