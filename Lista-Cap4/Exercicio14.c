/*Questão 14. Matriz de Classificação de Conceito por Nota e Faltas — Uma instituição de ensino
define o conceito do estudante combinando a nota final e a quantidade de faltas. Escreva um programa
em C que leia a nota (float) e o número de faltas (int) e determine o conceito conforme a tabela:
• Nota 9.0 a 10.0: Até 20 faltas = Conceito A | Acima de 20 faltas = Conceito B
• Nota 7.5 a 8.9: Até 20 faltas = Conceito B | Acima de 20 faltas = Conceito C
• Nota 5.0 a 7.4: Até 20 faltas = Conceito C | Acima de 20 faltas = Conceito D
• Nota 4.0 a 4.9: Até 20 faltas = Conceito D | Acima de 20 faltas = Conceito E
• Nota 0.0 a 3.9: Qualquer quantidade de faltas = Conceito E
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    // primeiro decide pela nota, depois pelas faltas
    if (nota >= 9.0)
        conceito = (faltas <= 20) ? 'A' : 'B';
    else if (nota >= 7.5)
        conceito = (faltas <= 20) ? 'B' : 'C';
    else if (nota >= 5.0)
        conceito = (faltas <= 20) ? 'C' : 'D';
    else if (nota >= 4.0)
        conceito = (faltas <= 20) ? 'D' : 'E';
    else
        conceito = 'E';

    printf("Conceito %c\n", conceito);

    system("PAUSE");
    return 0;
}
