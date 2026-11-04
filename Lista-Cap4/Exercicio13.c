/*Questão 13. Calculadora Aritmética e Científica com Menu switch — Crie um programa em C que
apresente um menu para o usuário escolher entre as operações: + (Soma), - (Subtração), *
(Multiplicação), / (Divisão) e ^ (Potenciação usando pow()). Em seguida, o programa lê os dois
operandos reais, realiza o cálculo selecionado via switch-case e exibe o resultado formatado. Caso a
operação seja divisão, valide para impedir divisão por zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char operacao;
    float num1, num2;

    printf("Operacoes: + (Soma), - (Subtracao), * (Multiplicacao), / (Divisao), ^ (Potencia)\n");
    printf("Escolha a operacao: ");
    scanf(" %c", &operacao);
    printf("Digite os dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch (operacao)
    {
        case '+': printf("Resultado: %.2f\n", num1 + num2); break;
        case '-': printf("Resultado: %.2f\n", num1 - num2); break;
        case '*': printf("Resultado: %.2f\n", num1 * num2); break;
        case '/':
            // impede divisao por zero
            if (num2 == 0)
                printf("Erro: divisao por zero!\n");
            else
                printf("Resultado: %.2f\n", num1 / num2);
            break;
        case '^': printf("Resultado: %.2f\n", pow(num1, num2)); break;
        default: printf("Operacao invalida!\n");
    }

    system("PAUSE");
    return 0;
}
