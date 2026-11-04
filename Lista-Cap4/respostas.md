# Lista de Exercícios – Capítulo 4: Comandos de Decisão

## Parte I: Questões Teóricas e Analíticas (Conceitos e Precedência)

### Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade
Em relação à sintaxe e semântica do comando if na Linguagem C, responda analiticamente:

**a)** Qual é o efeito prático de escrever `if (x = 0)` em vez de `if (x == 0)`? Explique o que acontece com a variável x e qual bloco de código será executado.

Resposta: `x = 0` é uma **atribuição**, não uma comparação. O x passa a valer 0 (perde o valor antigo) e a expressão inteira vale 0, que é falso. Então o bloco do `if` **nunca** é executado; se houver `else`, ele é que roda.

**b)** Como a Linguagem C interpreta valores numéricos inteiros ou reais dentro da condição do comando if? O que significa um resultado ser avaliado como 'falso' ou 'verdadeiro'?

Resposta: Em C não existe tipo lógico "de verdade": **0 (ou 0.0) é falso** e **qualquer valor diferente de zero é verdadeiro** (1, -5, 3.7...). Os operadores relacionais e lógicos devolvem 1 para verdadeiro e 0 para falso.

**c)** Analise a instrução `if (x = -5)` e determine se o bloco de código associado será executado ou ignorado. Justifique sua resposta com base no padrão ANSI C.

Resposta: O bloco **é executado**. A atribuição guarda -5 em x e a expressão vale -5; como é diferente de zero, o ANSI C considera verdadeiro.

---

### Questão 02. Associação do Comando else e Aninhamento de Decisões
Analise o trecho de código C abaixo que contém estruturas condicionais aninhadas:

```c
int x = 15, y = 5;
if (x > 10)
    if (y > 10)
        printf("Opção A\n");
else
    printf("Opção B\n");
```

**a)** Qual mensagem será impressa no console ao executar o código acima? Justifique por que a Opção B é ou não exibida.

Resposta: Imprime **"Opção B"**. A indentação engana: o `else` pertence ao `if (y > 10)`, e não ao `if (x > 10)`. Como x > 10 é verdadeiro e y > 10 é falso, cai no `else` do if de dentro.

**b)** Qual é a regra oficial da Linguagem C para associar uma cláusula else a um comando if em códigos sem chaves de bloco?

Resposta: O `else` sempre se associa ao **`if` mais próximo (acima dele) que ainda não tem `else`**. A indentação não faz diferença para o compilador.

**c)** Reescreva o código acima utilizando chaves { } para garantir explicitamente que a Opção B seja impressa apenas quando x <= 10.

Resposta:
```c
int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

---

### Questão 03. Operador Condicional Ternário vs. Estrutura if-else
O operador condicional ternário (? :) é uma forma concisa de tomada de decisão. Observe a instrução abaixo:

```c
media = (nota1 + nota2) / 2.0;
situacao = (media >= 7.0) ? 'A' : 'R';
```

**a)** Explique detalhadamente o funcionamento da segunda linha de código e qual valor será armazenado na variável situacao se media = 6.8.

Resposta: O ternário testa a condição `media >= 7.0`: se for verdadeira, a expressão vale `'A'`; se for falsa, vale `'R'`. O resultado é atribuído a `situacao`. Com media = 6.8 a condição é falsa, então `situacao = 'R'`.

**b)** Reescreva o trecho de código acima utilizando obrigatoriamente a estrutura tradicional if-else.

Resposta:
```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0)
    situacao = 'A';
else
    situacao = 'R';
```

**c)** O operador ternário pode substituir qualquer estrutura if-else na Linguagem C? Explique as limitações do operador ternário em relação a blocos com múltiplos comandos.

Resposta: **Não.** O ternário é uma *expressão*: cada lado tem que produzir **um valor**. Não dá pra colocar blocos com vários comandos, declarações, laços ou `return` dentro dele. Serve bem para escolher entre dois valores; para lógica com vários passos, use `if-else`.

---

### Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through
O comando switch é utilizado para seleção entre múltiplas alternativas. Observe o programa a seguir:

```c
#include <stdio.h>
int main() {
    int codigo = 2;
    switch (codigo) {
        case 1:
            printf("Bronze\n");
        case 2:
            printf("Prata\n");
        case 3:
            printf("Ouro\n");
            break;
        default:
            printf("Sem Medalha\n");
    }
    return 0;
}
```

**a)** Escreva a saída exata gerada no terminal ao executar este programa. Explique por que ocorreu mais de uma impressão.

Resposta:
```
Prata
Ouro
```
O switch pula para o `case 2`, mas como ele não tem `break`, a execução continua no `case 3` até encontrar o `break`.

**b)** Qual é o papel da instrução break dentro de um bloco switch-case e qual é o nome do fenômeno que ocorre quando ela é omitida?

Resposta: O `break` **sai do switch** quando termina o case. Sem ele, a execução "cai" nos cases de baixo; isso se chama **fall-through**.

**c)** Quais tipos de dados de variáveis ou expressões podem ser utilizados como argumento no comando switch (expressão)? É permitido usar float ou double? Justifique.

Resposta: Só **tipos inteiros**: `int`, `char`, `short`, `long` (e `enum`). **Não** pode `float` nem `double`: o padrão exige expressão inteira e os `case` precisam ser constantes inteiras. Além disso, comparar reais por igualdade exata é pouco confiável por causa da precisão.

---

### Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos
Os operadores lógicos (&& e ||) realizam a avaliação de curto-circuito (short-circuit evaluation). Considere as variáveis inteiras a = 0, b = 5, c = 10 e analise o código:

```c
if (a != 0 && ++b > 5)
    c += 10;
else
    c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);
```

**a)** Qual será a saída exata impressa pelo comando printf? Observe se o incremento ++b foi executado ou ignorado.

Resposta: `a = 0, b = 5, c = 8`. Como `a != 0` é falso, o `&&` já sabe que tudo é falso e **não avalia** `++b`. Por isso b continua 5. Cai no else: c = 10 - 2 = 8.

**b)** Explique o conceito de avaliação de curto-circuito para o operador lógico E (&&) e para o operador lógico OU (||).

Resposta: O C avalia da esquerda para a direita e para assim que já sabe o resultado.
- `&&`: se o lado esquerdo for **falso**, o direito não é avaliado (o resultado já é falso).
- `||`: se o lado esquerdo for **verdadeiro**, o direito não é avaliado (o resultado já é verdadeiro).

**c)** Qual seria o valor final de b e c se a condição fosse alterada para `if (a == 0 || ++b > 5)`?

Resposta: **b = 5 e c = 20**. `a == 0` é verdadeiro, então o `||` não avalia `++b`, e entra no if: c = 10 + 10 = 20.

---

### Questão 06. Construções else-if e Análise Lógica de Intervalos
Um programador escreveu o código abaixo para classificar a faixa etária de um indivíduo, mas o programa apresenta comportamento inconsistente para certas idades:

```c
int idade = 25;
if (idade >= 60)
    printf("Idoso\n");
if (idade >= 18)
    printf("Adulto\n");
if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");
```

**a)** Qual será a saída do programa para idade = 65? Explique por que múltiplas mensagens são exibidas.

Resposta:
```
Idoso
Adulto
Jovem
```
São três `if` independentes, e todos são testados. Como 65 é ≥ 60, ≥ 18 e ≥ 12, os três imprimem.

**b)** Qual é a diferença fundamental de execução entre uma sequência de comandos if independentes e uma cadeia else-if?

Resposta: Com `if`s independentes, **todas** as condições são testadas e várias podem ser executadas. Na cadeia `else-if`, o teste para na **primeira condição verdadeira** e as outras são ignoradas, então só um bloco executa.

**c)** Reescreva o programa utilizando a estrutura elegante e correta else-if para garantir que apenas uma categoria seja impressa.

Resposta:
```c
int idade = 25;
if (idade >= 60)
    printf("Idoso\n");
else if (idade >= 18)
    printf("Adulto\n");
else if (idade >= 12)
    printf("Jovem\n");
else
    printf("Criança\n");
```

---

## Parte II: Questões Práticas de Implementação (Código Fonte em C)

As questões 07 a 28 estão nos arquivos `Exercicio07.c` a `Exercicio28.c` desta pasta.
