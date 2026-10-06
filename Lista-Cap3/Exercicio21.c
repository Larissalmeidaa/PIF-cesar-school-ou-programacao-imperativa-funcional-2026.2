/*Questão 21. Jogo de Adivinhação com Letras Aleatórias e Dicas (rand()) — Desenvolva um jogo
interativo em C que sorteie uma letra minúscula aleatória entre 'a' e 'z' usando a função rand() % 26 +
'a' da biblioteca <stdlib.h>. O programa deve pedir para o usuário adivinhar a letra. A cada tentativa
errada, o programa deve informar se a letra secreta vem antes ou depois da letra digitada no alfabeto.
Quando o usuário acertar, exiba uma mensagem de parabéns e o total de tentativas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char secreto, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreto = rand() % 26 + 'a';

    printf("Adivinhe a letra minuscula (a-z) que eu sorteei!\n");

    do
    {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreto)
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        else if (palpite > secreto)
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);

    } while (palpite != secreto);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativa(s)!\n", secreto, tentativas);

    system("PAUSE");
    return 0;
}