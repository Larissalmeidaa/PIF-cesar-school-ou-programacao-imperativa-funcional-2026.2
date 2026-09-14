/*Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas — Historicamente,
literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-
padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o
usuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão
ANSI C:
a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos
(Linux, macOS, servidores)?
b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h>
para entrada e saída de caracteres?
c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira
robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.


RESPOSTAS
a- <conio.>nunca foi parte padrão ANSI, é uma biblioteca proprietária, criada originalmente pela Borland/Microsoft para compiladores DOS/Windows.
getch()/getche() são "atalhos" convenientes (leem um caractere sem precisar de ENTER), mas o preço é amarrar seu código a um único sistema operacional — algo que o padrão ANSI C foi desenhado justamente para evitar.

b-Equivalente portáveis em <stdio.h>
getchar() --- Lê um caractere de stdin
putchar() ---- Escreve um caractere em sdout
Scanf("%c", &c) ----- Também lê um caractere */

// LETRA C

#include <stdio.h>

int main()
{
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);   // o espaço antes de %c ignora \n/espaços deixados no buffer

    printf("Voce digitou: %c\n", c);

    return 0;
}