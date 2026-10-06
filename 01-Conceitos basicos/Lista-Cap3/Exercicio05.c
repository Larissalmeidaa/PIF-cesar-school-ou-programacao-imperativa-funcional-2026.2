/*Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle — O operador vírgula (,)
permite agrupar múltiplas expressões em um único comando, garantindo a avaliação da esquerda
para a direita. Observe o trecho abaixo:

int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}

a) Exatamente quantas iterações o laço acima executará antes de ser encerrado?
   O laço executa 5 iterações. A cada volta, i sobe 1 e j desce 1, então eles se aproximam de 2 em 2. Quando chegam em i = 5 e j = 5, o teste i < j vira falso e o laço para. 

b) Escreva a saída exata produzida pelo comando printf em cada uma das iterações
executadas.
    i = 0, j = 10|soma = 10
    i = 1, j = 9 | soma = 10
    i = 2, j = 8 | soma = 10
    i = 3, j = 7 | soma = 10
    i = 4, j = 6 | soma = 10

c) Reescreva a lógica deste mesmo laço utilizando obrigatoriamente a estrutura while.

int i, j;

i = 0;
j = 10;

while (i < j)
{
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}*/
