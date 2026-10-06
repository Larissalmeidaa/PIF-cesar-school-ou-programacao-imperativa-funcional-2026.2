/*Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços — A linguagem C
disponibiliza três estruturas de controle para execução iterativa de código: for, while e do-while.
Analise o funcionamento dessas estruturas e responda:
a) Qual é a diferença essencial entre as estruturas while e do-while em relação ao número
mínimo de execuções do bloco de código e ao momento em que a condição de teste é
avaliada?
    O while avalia a condição antes de cada volta, então o corpo pode executar 0 vezes, se a condição já começar com falsa. O do-while avalia depois,então o corpo executa pelo menos 1 vez, mesmo com a condição falsa desde o início.

b) Em que situações de programação cada uma das três estruturas (for, while e do-while) se
apresenta como a escolha mais elegante, legível e adequada?
    For: quando o número de repetições é conhecido ou controlado por um contador. Inicialização, teste e incremento ficam numa linha só.
    While: quando não se sabe quantas voltas haverá e o corpo pode nem precisar rodar (lê caracteres até apertar Enter, repetir enquanto não acertar)
    do-while: quando a ação precisa acontecer ao menos uma vez antes do teste

c) Análise de código: O trecho 'while (condicao);' (com ponto-e-vírgula ao final) é um erro de
compilação ou um erro de lógica? Explique detalhadamente o que ocorre durante a execução
se condicao for verdadeira.
    É erro de lógica, não de compilação. O ; logo while(condição) vira uma instrução nula (vazia), que e sintaxe válida, então o compilador aceita.
*/


