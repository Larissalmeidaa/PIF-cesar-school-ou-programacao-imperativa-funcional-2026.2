/* Questão 18. Cadastro de Funcionários (Vetor de Estruturas) (Cap. 8) — Defina, com
typedef struct, o tipo Funcionario com nome, código e salário. Leia os dados de 4
funcionários em um vetor e exiba o funcionário com maior salário, a média salarial e, para
cada funcionário com salário abaixo da média, o valor do salário após um reajuste de 10%.
*/

#include <stdio.h>
#include <string.h>

#define QTD 4

typedef struct
{
    char nome[50];
    int codigo;
    float salario;
} Funcionario;

int main()
{
    Funcionario f[QTD];
    int i, maior = 0;
    float soma = 0, media;

    for (i = 0; i < QTD; i++)
    {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        fgets(f[i].nome, sizeof(f[i].nome), stdin);
        f[i].nome[strcspn(f[i].nome, "\n")] = '\0';
        printf("Codigo: ");
        scanf("%d", &f[i].codigo);
        printf("Salario: ");
        scanf("%f", &f[i].salario);
        getchar();   // descarta o '\n' antes do proximo fgets

        soma += f[i].salario;
        if (f[i].salario > f[maior].salario)
            maior = i;
    }

    media = soma / QTD;

    printf("\nMaior salario: %s (codigo %d) - R$ %.2f\n",
           f[maior].nome, f[maior].codigo, f[maior].salario);
    printf("Media salarial: R$ %.2f\n", media);

    printf("\nReajuste de 10%% para salarios abaixo da media:\n");
    for (i = 0; i < QTD; i++)
    {
        if (f[i].salario < media)
            printf("%s (codigo %d): R$ %.2f -> R$ %.2f\n",
                   f[i].nome, f[i].codigo, f[i].salario, f[i].salario * 1.10);
    }

    return 0;
}
