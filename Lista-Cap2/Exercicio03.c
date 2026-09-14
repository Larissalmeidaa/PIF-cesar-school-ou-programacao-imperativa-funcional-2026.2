/*Questão 03. Formatação de Saída em Bases Numéricas e ASCII — A função de saída printf()
oferece controle total sobre a representação dos dados na tela através de especificadores de
formato de base numérica. Desenvolva as instruções em C necessárias para realizar a seguinte
tarefa:
Leia um único número inteiro fornecido pelo usuário e exiba uma única mensagem no console
que mostre esse mesmo valor nas seguintes representações simultâneas: base decimal (%d), base
hexadecimal em caixa baixa (%x), base octal (%o) e o caractere correspondente à tabela ASCII (%c).
*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf(" | Decimal: %d\n | Hexadecimal: %x\n | Octal: %o\n | ASCII: %c\n", numero, numero, numero, numero); 


    return 0;
}
