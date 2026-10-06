/*Questão 18. Inversão de Dígitos de um Número Inteiro (Algoritmo Numérico) — Elabore um
programa que solicite ao usuário um número inteiro positivo (ex: 12345) e construa um novo número
inteiro com os dígitos em ordem inversa (ex: 54321). Dica: utilize um laço enquanto o número for
maior que zero, extraindo o último dígito com o operador resto (%) e reduzindo o número com a
divisão inteira (/).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, digito;
    int invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    printf("Numero invertido: %d\n", invertido);

    system("PAUSE");
    return 0;
}