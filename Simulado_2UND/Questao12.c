/* Questão 12. Temperaturas da Semana (Vetores) (Cap. 7) — Declare #define TAM 10 e um
vetor de float. Leia as temperaturas máximas de TAM dias e exiba a temperatura média, a
maior temperatura com o número da posição em que ela ocorreu e quantos dias ficaram
acima da média.
*/

#include <stdio.h>

#define TAM 10

int main()
{
    float temp[TAM], soma = 0, media;
    int i, posMaior = 0, acima = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("Temperatura maxima do dia %d: ", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];

        if (temp[i] > temp[posMaior])
            posMaior = i;
    }

    media = soma / TAM;

    for (i = 0; i < TAM; i++)
    {
        if (temp[i] > media)
            acima++;
    }

    printf("\nTemperatura media: %.2f\n", media);
    printf("Maior temperatura: %.2f (posicao %d)\n", temp[posMaior], posMaior + 1);
    printf("Dias acima da media: %d\n", acima);

    return 0;
}
