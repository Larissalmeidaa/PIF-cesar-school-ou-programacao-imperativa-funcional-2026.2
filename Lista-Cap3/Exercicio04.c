/*Questão 04. Comandos de Desvio de Fluxo: break vs. continue — Os comandos break e
continue são instruções de controle de desvio que alteram a execução normal de laços de
repetição:
a) Descreva a ação exata executada pelo programa quando o comando break é acionado
dentro de um laço for ou while.
    Break -> ele encerra imediatamente o laço em que está, sem terminar a volta a volta atual e sem testar a condição de novo. O programa pula pra primeira instrução depois do laço. Serve pra for e while

b) Descreva a ação exata executada pelo programa quando o comando continue é acionado
dentro de um laço for. Qual das três expressões do cabeçalho do for é executada
imediatamente após o continue?
    continue -> Ele pula o resto do corpo da volta atual e passa direto pra próxima volta. O laço não é encerrado.
    No for, a expressão executada logo após o continue é o incremento (a terceira, tipo i++). Depois dele, vem o teste e a próxima volta normalmente.
    No while, não existe incremento no cabeçalho, então o continue volta direto pro teste da condição.

    c) Em uma estrutura de laços aninhados (um laço for interno dentro de outro laço for externo),
qual laço é interrompido quando a instrução break é executada dentro do laço interno?
    Só o laço mais interno, onde o break está, é interrompido. O laço externo continua normalmente, passando pra sua próxima volta (e o laço interno recomeça do zero).*/
