/*Questão 09. Acumulador de Valores Reais com Sentinela de Parada Negativa — Faça um
programa que permita ao usuário fornecer uma sequência indeterminada de valores reais positivos. O
programa deve parar de solicitar valores no momento em que o usuário fornecer um valor negativo
(que funcionará como sentinela de parada). Ao final, o programa deve exibir a quantidade de valores
válidos digitados, a soma total e a média aritmética (garantindo que o valor negativo de parada não
entre nos cálculos).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, soma = 0, media;
    int quantidade = 0;

    printf("Digite um valor (negativo para parar): ");
    scanf("%f", &valor);

    while (valor >= 0)
    {
        soma += valor;
        quantidade++;

        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &valor);
    }

    media = soma / (quantidade > 0 ? quantidade : 1);

    printf("\nQuantidade de valores: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);
    printf("Media: %.2f\n", media);

    system("PAUSE");
    return 0;
}