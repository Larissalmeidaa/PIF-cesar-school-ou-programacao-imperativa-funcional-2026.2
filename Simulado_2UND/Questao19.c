/* Questão 19. Níveis de Acesso com Enumeração (Cap. 8) — Defina typedef enum
{ VISITANTE = 1, USUARIO, ADMIN } Nivel e uma estrutura Usuario com nome e nível. Leia os
dados de um usuário e, usando switch-case sobre o nível, exiba suas permissões: Visitante,
"apenas leitura"; Usuário, "leitura e escrita"; Administrador, "leitura, escrita e gerenciamento
de usuários". Trate níveis inválidos com default.
*/

#include <stdio.h>
#include <string.h>

typedef enum { VISITANTE = 1, USUARIO, ADMIN } Nivel;

typedef struct
{
    char nome[50];
    Nivel nivel;
} Usuario;

int main()
{
    Usuario u;
    int n;

    printf("Nome do usuario: ");
    fgets(u.nome, sizeof(u.nome), stdin);
    u.nome[strcspn(u.nome, "\n")] = '\0';

    printf("Nivel (1 = Visitante, 2 = Usuario, 3 = Administrador): ");
    scanf("%d", &n);
    u.nivel = (Nivel) n;

    printf("%s: ", u.nome);
    switch (u.nivel)
    {
    case VISITANTE:
        printf("apenas leitura\n");
        break;
    case USUARIO:
        printf("leitura e escrita\n");
        break;
    case ADMIN:
        printf("leitura, escrita e gerenciamento de usuarios\n");
        break;
    default:
        printf("nivel de acesso invalido\n");
    }

    return 0;
}
