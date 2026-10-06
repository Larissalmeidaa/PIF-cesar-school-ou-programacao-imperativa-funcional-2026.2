/*Questão 16. Autenticação de Senha com Limite Finito de Tentativas — Desenvolva um sistema de
autenticação que defina uma senha numérica secreta (ex: 2026). O programa deve permitir que o
usuário tente digitar a senha no máximo 3 vezes. Se o usuário acertar a senha, o programa deve
imprimir 'Acesso Concedido!' e o número de tentativas utilizadas, encerrando a execução. Se errar as 3
tentativas, o programa deve exibir 'Conta Bloqueada por Segurança!'.
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

    printf(tentativa == senha ? "Acesso Concedido! Tentativas utilizadas: %d\n"
                              : "Conta Bloqueada por Seguranca!\n", i);

    system("PAUSE");
    return 0;
}