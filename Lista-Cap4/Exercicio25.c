/*Questão 25. Decomposição de Troco na Menor Quantidade de Cédulas — Escreva um programa
em C que receba o valor total a pagar e o valor entregue pelo cliente ao caixa (inteiros positivos).
Calcule o troco devido. Se o valor entregue for insuficiente, exiba uma mensagem de erro. Caso
contrário, decomponha o troco na menor quantidade possível de cédulas de R$ 100, R$ 50, R$ 20, R$
10, R$ 5 e R$ 2 utilizando comandos condicionais e operações aritméticas inteiras.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, entregue, troco;

    printf("Valor a pagar: ");
    scanf("%d", &total);
    printf("Valor entregue: ");
    scanf("%d", &entregue);

    if (entregue < total)
    {
        printf("Erro: valor entregue insuficiente!\n");
        return 1;
    }

    troco = entregue - total;
    printf("Troco: R$ %d\n", troco);

    // divisao inteira (/) = quantas cedulas; resto (%) = o que ainda falta
    if (troco / 100 > 0) printf("%d cedula(s) de R$ 100\n", troco / 100);
    troco = troco % 100;
    if (troco / 50 > 0) printf("%d cedula(s) de R$ 50\n", troco / 50);
    troco = troco % 50;
    if (troco / 20 > 0) printf("%d cedula(s) de R$ 20\n", troco / 20);
    troco = troco % 20;
    if (troco / 10 > 0) printf("%d cedula(s) de R$ 10\n", troco / 10);
    troco = troco % 10;
    if (troco / 5 > 0) printf("%d cedula(s) de R$ 5\n", troco / 5);
    troco = troco % 5;
    if (troco / 2 > 0) printf("%d cedula(s) de R$ 2\n", troco / 2);
    troco = troco % 2;
    if (troco > 0) printf("Sobrou R$ %d (nao existe cedula de R$ 1)\n", troco);

    system("PAUSE");
    return 0;
}
