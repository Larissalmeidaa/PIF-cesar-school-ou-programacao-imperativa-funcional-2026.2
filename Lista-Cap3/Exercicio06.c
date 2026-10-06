/*Questão 06. Laço Sem Corpo e Incremento Pós-fixado — Analise o trecho de código abaixo
que utiliza um laço de repetição com corpo vazio:

int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);

a) Qual é o valor final da variável x que será impresso pela instrução printf?
    valor é 6

b) Explique passo a passo a sequência de incrementos e comparações lógicas que ocorrem
durante a execução do teste 'x++ < 5'.
    Na 6ª checagem, a comparação usa o 5 (falsa, o laço termina), mas o incremento acontece mesmo assim, deixando x = 6. Por isso o valor final é 6 e não 5.

c) Reescreva esse código de forma explícita e clara (sem corpo vazio), mantendo exatamente o
mesmo resultado final de x.

int x = 0;

while (x < 5)
{
    x++;
}
x++;   // o incremento extra da checagem que falhou

printf("Valor final de x = %d\n", x);
*/
