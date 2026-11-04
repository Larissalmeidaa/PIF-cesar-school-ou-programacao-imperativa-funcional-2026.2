/*Questão 22. Cálculo de Impostos Estaduais sobre Produtos — Uma empresa vende produtos para
quatro estados diferentes. Escreva um programa em C que leia o valor de um produto (float) e a sigla
do estado de destino do frete (lida como inteiro ou código char: 1=MG, 2=SP, 3=RJ, 4=MS). O
programa deve adicionar a alíquota de imposto correspondente ao valor final:
• MG: 7% | SP: 12% | RJ: 15% | MS: 8%
Exiba o preço final acrescido do imposto. Se o código do estado for inválido, mostre uma mensagem de
erro.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, imposto;
    int estado;

    printf("Valor do produto: ");
    scanf("%f", &valor);
    printf("Estado (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado)
    {
        case 1: imposto = 0.07; break;
        case 2: imposto = 0.12; break;
        case 3: imposto = 0.15; break;
        case 4: imposto = 0.08; break;
        default:
            printf("Erro: estado invalido!\n");
            return 1;
    }

    printf("Preco final: R$ %.2f\n", valor * (1 + imposto));

    system("PAUSE");
    return 0;
}
