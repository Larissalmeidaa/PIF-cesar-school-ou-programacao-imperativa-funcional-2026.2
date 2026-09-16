/*Questão 26. Orçamento para Cercamento Perimetral de Terrenos — Desenvolva um programa
para cercamento de terrenos agrícolas. O programa deve ler do teclado: a) O comprimento e a
largura do terreno em metros; b) O preço unitário do metro de arame farpado (em reais). Sabendo
que o cercamento de segurança exige exatamente 3 fios de arame esticados ao longo do
perímetro do terreno, calcule e mostre na tela quantos metros de arame farpado devem ser
comprados e o custo total do cercamento.
*/

#include <stdio.h>

int main()
{
    float comprimento, largura, precoMetro;
    float perimetro, metrosArame, custoTotal;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame (R$): ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);
    metrosArame = perimetro * 3;
    custoTotal = metrosArame * precoMetro;

    printf("Perimetro: %.2f m\n", perimetro);
    printf("Metros de arame necessarios: %.2f m\n", metrosArame);
    printf("Custo total: R$ %.2f\n", custoTotal);

    return 0;
}
