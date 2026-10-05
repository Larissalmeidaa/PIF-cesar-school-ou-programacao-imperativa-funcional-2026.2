/*Questão 14. Autenticação de Senha com Limite Finito de Tentativas —
Desenvolva um sistema de autenticação que defina uma senha numérica secreta
(ex: 2026). O programa deve permitir que o usuário tente digitar a senha no máximo
3 vezes usando um laço while ou for. Se acertar, exiba 'Acesso Concedido!' e encerre;
se errar as 3 vezes, exiba 'Conta Bloqueada por Segurança!'.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha = 2026;
    int tentativa = 0;
    int i = 0;

    while (i < 3 && tentativa != senha)
    {
        printf("Tentativa %d - Digite a senha: ", i + 1);
        scanf("%d", &tentativa);
        i++;
    }

    printf("%s\n", tentativa == senha ? "Acesso Concedido!" : "Conta Bloqueada por Seguranca!");

    system("PAUSE");
    return 0;
}
