/*Questão 23. Cálculo de Horário de Término de Experimento Biológico — Desenvolva um
programa em C que auxilie na medição do tempo de experimentos científicos de laboratório. O
programa deve receber do usuário: a) O horário de início do experimento no formato Horas,
Minutos e Segundos de forma independente; b) A duração total da experiência expressa
estritamente em segundos. O programa deve calcular e exibir na tela o horário exato de término
do experimento no formato hh:mm:ss. Utilize os operadores de divisão (/) e resto da divisão (%)
para obter os novos valores de tempo de forma estruturada.
*/

#include <stdio.h>

int main()
{
    int horaIni, minIni, segIni;
    int duracao;
    int totalSegundos, horaFim, minFim, segFim;

    printf("Digite a hora de inicio (h m s): ");
    scanf("%d %d %d", &horaIni, &minIni, &segIni);

    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = horaIni * 3600 + minIni * 60 + segIni + duracao;

    totalSegundos = totalSegundos % 86400;  // garante que não passe de 24h (um dia tem 86400s)

    horaFim = totalSegundos / 3600;
    minFim = (totalSegundos % 3600) / 60;
    segFim = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n", horaFim, minFim, segFim);

    return 0;
}
