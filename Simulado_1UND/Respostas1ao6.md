# Simulado – Capítulos 1, 2 e 3 – PIF

**CESAR School** – Análise e Desenvolvimento de Sistemas (ADS)
**Disciplina:** Programação Imperativa e Funcional (PIF)
**Docente:** Prof. Danilo Farias Soares da Silva | **Semestre:** 2026.2

---

## PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS (CONCEITOS E PRECEDÊNCIA)

### Questão 01. Sensibilidade a Caixa (Case Sensitivity) e Identificadores em C (Cap. 1)

A linguagem C diferencia rigorosamente letras maiúsculas e minúsculas na formação de nomes de identificadores e palavras-chave. Com base nessa premissa, analise os pares de identificadores abaixo e assinale a alternativa correta:

a) Os nomes de variáveis 'numero' e 'Numero' referenciam o mesmo endereço de memória.
b) A palavra-chave 'Main' com 'M' maiúsculo é reconhecida pelo compilador como ponto de entrada válido.
c) Todos os pares de nomes ('valor'/'VALOR', 'peso'/'Peso', 'taxa'/'TAXA') representam identificadores totalmente distintos para o compilador.
d) A sensibilidade a caixa baixa/alta depende exclusivamente do sistema operacional utilizado na compilação.

**Resposta: LETRA C**

---

### Questão 02. Especificadores de Formato, Sequências de Escape e Erros de Compilação (Cap. 1)

Um estudante iniciante escreveu o código C abaixo tentando imprimir mensagens formatadas com quebras de linha e tabulações, mas enfrentou erros de compilação. Identifique os três erros sintáticos/estruturais presentes no código:

```c
#include <stdio.h>
#include <stdlib.h>;

int Main()
{
    int idade = 20;
    printf( A idade do aluno eh: %d anos.. , idade);
    cout << endl;
    system("PAUSE");
    return 0;
}
```

**Resposta:1º Faltou aspas duplas dentro do parênteses do printf.2º "A idade do aluno eh: %d anos." Precisa estar delimitado por aspas duplas,para ser reconhecido como uma string literal.3º "cout << endl;" é sintaxe de C++, não existe em C**

---

### Questão 03. Operadores de Atribuição Composta e Avaliação Sequencial (Cap. 2)

Os operadores de atribuição em C executam suas ações da direita para a esquerda e podem ser combinados com operadores aritméticos. Determine os valores finais de a, b, c e d após a execução da sequência abaixo:

```c
int a = 2, b = 4, c = 5, d = 10;
a += b + c;          // Valor final de a = 11
b *= c = d - 2;      // Valores finais de b e c = (c =8), (b=32)
d %= a + 3;          // Valor final de d = 10
a += b += c += 5;    // Valores finais de a, b e c = (a=56), (b=45), (C=13), (d=10)
```

**Resposta: a+= b+c --> 2+=4+5 --> a=2+9=11  (a=11)**
**Resposta: b *= c = d - 2 --> (d) 10-2=8 =c  --> b *= 4 * 8= 32   (b=32), (a=11), (c=8)**
**Resposta: d %= a + 3 --> (a) 11 + 3 = 14  --> d %= d % 14= 10 % 14= 10**
**Resposta: a += b += c += 5 --> (c = 8+5= 13) (b = 32+13= 45) (a= 11+45= 56)**

### Questão 04. Avaliação de Expressões Lógicas, Relacionais e Precedência (Cap. 2)

Considere as variáveis inteiras i = 2, j = 3, k = 0 e as variáveis de ponto flutuante x = 2.5, y = 5.0. Avalie cada expressão abaixo e determine seu resultado lógico em C (1 para Verdadeiro, 0 para Falso):

a) `i < j + 2` => **Resultado: 1**
b) `2 * i - 5 <= j - 4` => **Resultado: 1**
c) `!k && (x + y >= 7.5)` => **Resultado: 1**
d) `!(i == j) || (y / x == 2.0)` => **Resultado: 1**
e) `i == 2 && j == 4 || k == 0` => **Resultado: 1**


---

### Questão 05. Estruturas de Repetição: Comparação entre for, while e do-while (Cap. 3)

As estruturas de repetição permitem a execução iterativa de instruções em C. Analise as características de for, while e do-while e responda fundamentadamente:

a) Qual é a diferença essencial entre while e do-while em relação ao número mínimo de execuções do bloco de código e ao momento do teste condicional?
b) Em que cenários o laço for se apresenta como a escolha mais elegante e legível frente ao laço while?
c) O trecho de código `while (condicao);` (com ponto-e-vírgula ao final do cabeçalho) constitui um erro de compilação ou de lógica? O que acontece se condicao for verdadeira?

**Resposta:a) while testa antes de cada volta, então pode executar 0 vezes. do-while testa depois, então executa pelo menos 1 vez.**

**Resposta:b) Quando o número de repetições é conhecido (contador). O for junta inicialização, teste e incremento numa linha só, e evita esquecer o i++. O while serve melhor quando não se sabe quantas voltas haverá.**

**Resposta:c) É erro de lógica, não de compilação: o ; vira uma instrução vazia, que é sintaxe válida. Se condicao for verdadeira, o laço fica infinito, porque o corpo vazio nunca altera a condição, e o bloco { } abaixo nunca é executado.**

---

### Questão 06. Escopo de Bloco e Comandos de Desvio (break e continue) (Cap. 3)

Analise o programa abaixo que calcula a soma acumulada de quadrados dentro de um laço for contendo um comando de desvio e controle de escopo interno:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

a) Por que o compilador emitirá um erro de compilação na instrução printf final?
b) Quais iterações do laço serão efetivamente executadas e qual o impacto dos comandos continue e break no fluxo?
c) Reescreva o código corrigindo o escopo de 'soma' e apresente o resultado que será impresso no console.

**Resposta: 
**(A) A variável soma foi declarada dentro das chaves { } do for, então só existe ali dentro.** 

**(B)continue: pula o resto da volta atual e vai direto pro próximo i++. O laço continua.break: encerra o laço de vez, sem terminar as voltas que faltavam.**

 **(C) A solução é declarar e inicializar soma antes do for, pra ela existir fora do laço e não ser zerada a cada volta**
 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // fora do laço: existe até o fim do main e acumula

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

---

## PARTE II: QUESTÕES PRÁTICAS DE IMPLEMENTAÇÃO (CÓDIGO FONTE EM C)

As questões 8 a 15 estão nos arquivos `.c` desta pasta:

- [Questao08.c](Questao08.c) – Cálculos Geométricos e Constantes com `<math.h>`
- [Questao09.c](Questao09.c) – Geometria do Triângulo e Fórmula de Heron
- [Questao10.c](Questao10.c) – Resto da Divisão (`%`) e Decomposição do Tempo
- [Questao11.c](Questao11.c) – Cálculo Salarial com Gratificação e Impostos
- [Questao12.c](Questao12.c) – Validação de Entrada de Dados com Laço Garantido (`do-while`)
- [Questao13.c](Questao13.c) – Cálculo do Fatorial com Tratamento do Zero e Tipo `long long int`
- [Questao14.c](Questao14.c) – Autenticação de Senha com Limite Finito de Tentativas
- [Questao15.c](Questao15.c) – Geração de Padrões Visuais com Laços Aninhados: Triângulo de Floyd
