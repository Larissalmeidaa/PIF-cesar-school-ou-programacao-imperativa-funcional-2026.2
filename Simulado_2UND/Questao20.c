/* Questão 20. Duração de Sessões (Estruturas por Valor) (Cap. 8) — Defina a estrutura
Horario com hora e minuto. Crie a função int duracao(Horario ini, Horario fim), que recebe
duas estruturas por valor e devolve a duração em minutos (considere que ambos os horários
são do mesmo dia). Na main(), leia o horário de início e o de fim de uma sessão de cinema e
exiba a duração em minutos e no formato XhYYmin.
*/

#include <stdio.h>

typedef struct
{
    int hora;
    int minuto;
} Horario;

int duracao(Horario ini, Horario fim);

int main()
{
    Horario ini, fim;
    int total;

    printf("Horario de inicio (hh mm): ");
    scanf("%d %d", &ini.hora, &ini.minuto);
    printf("Horario de fim (hh mm): ");
    scanf("%d %d", &fim.hora, &fim.minuto);

    total = duracao(ini, fim);

    if (total < 0)
    {
        printf("O horario de fim deve ser depois do inicio.\n");
        return 1;
    }

    printf("Duracao: %d minutos\n", total);
    printf("Duracao: %dh%02dmin\n", total / 60, total % 60);

    return 0;
}

// recebe as estruturas por valor e devolve a diferenca em minutos
int duracao(Horario ini, Horario fim)
{
    return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}
