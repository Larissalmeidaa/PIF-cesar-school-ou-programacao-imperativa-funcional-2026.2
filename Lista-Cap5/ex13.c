/* Questão 13. Calculadora com Quatro Operações — Implemente o desafio visto em aula: crie
as funções soma, subtrai, multiplica e divide, todas recebendo dois valores float e retornando
float. A main() deve exibir um menu, ler a opção e os dois operandos e chamar a função
correspondente. Na divisão, valide a divisão por zero antes de chamar a função.
*/

#include <stdio.h>

// protótipos
float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main()
{
    int opcao;
    float a, b;

    printf("===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch (opcao)
    {
    case 1:
        printf("%.2f + %.2f = %.2f\n", a, b, soma(a, b));
        break;
    case 2:
        printf("%.2f - %.2f = %.2f\n", a, b, subtrai(a, b));
        break;
    case 3:
        printf("%.2f * %.2f = %.2f\n", a, b, multiplica(a, b));
        break;
    case 4:
        // valida antes de chamar a função
        if (b == 0)
            printf("Erro: divisao por zero!\n");
        else
            printf("%.2f / %.2f = %.2f\n", a, b, divide(a, b));
        break;
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}

// devolve a + b
float soma(float a, float b)
{
    return a + b;
}

// devolve a - b
float subtrai(float a, float b)
{
    return a - b;
}

// devolve a * b
float multiplica(float a, float b)
{
    return a * b;
}

// devolve a / b (b já foi validado na main)
float divide(float a, float b)
{
    return a / b;
}
