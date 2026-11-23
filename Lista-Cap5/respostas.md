# Lista de Exercícios – Capítulo 5: Funções

## Parte I: Questões Teóricas e Analíticas (Conceitos, Retorno, Recursão e Pré-processamento)

### Questão 01. Anatomia de uma Função e o Papel do Protótipo
Observe o programa abaixo:

```c
#include <stdio.h>
float celsius(float);
int main() {
    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f\n", c);
    return 0;
}
float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
```

**a) Identifique no código o protótipo, a chamada e a definição da função celsius(). Explique o papel de cada uma dessas três etapas.**

Resposta:
- **Protótipo:** `float celsius(float);` (antes da main). Avisa o compilador que a função existe, qual o tipo de retorno e quais os tipos dos parâmetros.
- **Chamada:** `c = celsius(f);` (dentro da main). É onde a função é usada: o valor de `f` é copiado para o parâmetro e o resultado volta e é guardado em `c`.
- **Definição:** `float celsius(float fahr) { ... }` (depois da main). É o corpo da função, o código que realmente faz a conta e devolve o valor com `return`.

**b) Qual é a função do protótipo para o compilador? O que aconteceria, em termos de verificação de parâmetros, se ele fosse omitido e a função fosse definida depois da main()?**

Resposta: O protótipo serve para o compilador conferir se as chamadas estão certas (quantidade e tipo dos argumentos e tipo de retorno) antes de ver a definição. Sem ele, quando o compilador chega em `celsius(f)` ele ainda não conhece a função, então não consegue checar os parâmetros. Em C antigo ele assume que a função retorna `int` (declaração implícita), dá warning e depois pode dar erro de "conflicting types" quando encontra a definição como `float`, ou o programa roda com valor errado.

**c) Qual é o tipo da função celsius()? Explique por que o tipo de uma função é determinado pelo valor retornado e não pelos parâmetros recebidos.**

Resposta: O tipo é `float`. O tipo da função é o tipo do valor que ela devolve, porque é esse valor que "substitui" a chamada na expressão (`c = celsius(f)` vira `c = 37.78`). Os parâmetros são só as entradas; uma função pode receber vários parâmetros de tipos diferentes, mas devolve um único valor de um único tipo.

---

### Questão 02. O Comando return e suas Limitações
Analise os trechos a seguir:

```c
int calcular(int a, int b, int c) {
    int soma = a + b + c;
    int media = soma / 3;
    return soma, media;
}

void imprime_mensagem(int erro) {
    if (erro < 0) {
        printf("Erro invalido\n");
        return;
    }
    printf("Codigo processado: %d\n", erro);
}
```

**a) Quantos valores uma função em C pode devolver por meio do comando return? O que o programador pretendia fazer na função calcular() e por que a abordagem não cumpre esse objetivo?**

Resposta: Só **um** valor. O programador queria devolver a soma e a média ao mesmo tempo. Mas em C a vírgula ali vira o operador vírgula: ele avalia `soma`, descarta, e o resultado da expressão é só o último, `media`. Então a função devolve só a média e a soma se perde.

**b) Qual é o efeito do comando return; dentro da função void imprime_mensagem()? Ele é obrigatório no final de uma função void? Justifique.**

Resposta: O `return;` encerra a função na hora e volta para quem chamou, sem devolver valor. No exemplo, se o erro for negativo ele imprime "Erro invalido" e sai, sem chegar no segundo `printf`. Não é obrigatório no final de uma função void, porque quando a execução chega na `}` final a função já termina sozinha.

**c) Reescreva a função calcular() para que ela retorne apenas a média dos três valores. Em seguida, crie uma segunda função, separada, que retorne apenas a soma. Explique por que, em C, precisamos de duas funções para devolver dois resultados diferentes quando usamos apenas o comando return.**

Resposta:

```c
int calcularMedia(int a, int b, int c) {
    int soma = a + b + c;
    return soma / 3;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}
```

Como o `return` só devolve um valor por chamada, se eu quero dois resultados diferentes (soma e média) usando só `return`, preciso de uma função para cada resultado e chamar as duas na main.

---

### Questão 03. Funções void, Parâmetros e Assinaturas
Considere os três protótipos abaixo:

```c
void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);
```

**a) Classifique cada protótipo quanto à existência de parâmetros de entrada e de valor de retorno.**

Resposta:

| Protótipo | Parâmetros | Retorno |
|---|---|---|
| `exibe_mensagem` | tem 1 (um texto, `msg`) | não tem (void) |
| `obter_codigo` | não tem (void) | tem, `int` |
| `limpar_tela` | não tem (void) | não tem (void) |

**b) Qual é a diferença prática entre uma função com retorno e um procedimento (função void)? Dê um exemplo de situação em que cada um é a escolha mais adequada.**

Resposta: A função com retorno calcula algo e devolve o resultado para quem chamou, que pode guardar numa variável ou usar numa expressão. O procedimento (void) só executa uma ação (imprimir, desenhar menu etc.) e não devolve nada.
- Com retorno: calcular a média de notas (`float media(...)`), porque preciso do valor depois.
- Void: mostrar um menu na tela (`void exibeMenu(void)`), porque só imprime e não tem resultado para devolver.

**c) Uma chamada como x = limpar_tela(); é válida? Justifique com base no tipo da função.**

Resposta: Não é válida. `limpar_tela` é `void`, ou seja, não devolve nenhum valor, então não tem o que atribuir a `x`. O compilador dá erro ("void value not ignored as it ought to be"). O certo é chamar só `limpar_tela();`.

---

### Questão 04. Recursão: Caso Base, Passo Recursivo e Pilha de Execução
Analise a função recursiva:

```c
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

**a) Identifique o caso base e o passo recursivo. O que aconteceria se o caso base fosse removido?**

Resposta:
- **Caso base:** `n == 0` → devolve 1 (para de chamar).
- **Passo recursivo:** `n * fatorial(n - 1)` → chama a si mesma com um número menor.

Sem o caso base a função nunca para: chama fatorial(-1), fatorial(-2)... até a pilha encher e o programa travar (stack overflow / segmentation fault).

**b) Faça o rastreamento completo da chamada fatorial(4), mostrando a fase de empilhamento e a fase de desempilhamento, com o valor devolvido por cada chamada.**

Resposta:

Empilhamento (descendo):
```
fatorial(4) -> 4 * fatorial(3)   (espera)
fatorial(3) -> 3 * fatorial(2)   (espera)
fatorial(2) -> 2 * fatorial(1)   (espera)
fatorial(1) -> 1 * fatorial(0)   (espera)
fatorial(0) -> caso base, devolve 1
```

Desempilhamento (voltando):
```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1 = 1
fatorial(2) devolve 2 * 1 = 2
fatorial(3) devolve 3 * 2 = 6
fatorial(4) devolve 4 * 6 = 24
```

Resultado final: **24**.

**c) Explique, em termos de pilha de execução, o que acontece na memória a cada chamada recursiva e por que uma recursão sem caso base pode causar falha no programa.**

Resposta: A cada chamada é criado um novo "quadro" (frame) na pilha com a cópia do parâmetro `n`, as variáveis locais e o endereço de retorno. Esse quadro fica lá esperando a chamada de baixo terminar. Quando chega no caso base, os quadros vão sendo retirados um por um (do último para o primeiro). Sem caso base, os quadros só são colocados e nunca retirados; como a pilha tem tamanho limitado, uma hora ela estoura (stack overflow) e o programa é encerrado com erro.

---

### Questão 05. Diretiva #define, Constantes e Macros com Argumentos
Analise o código:

```c
#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2

int main() {
    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));
    return 0;
}
```

**a) Qual será a saída de cada printf? Explique por que SQR e DOBRO se comportam de maneira diferente, relacionando o resultado ao uso de parênteses de proteção.**

Resposta:
```
25
8
```
- `SQR(2+3)` vira `((2+3)*(2+3))` = 5 * 5 = **25**. Os parênteses garantem que a soma é feita antes.
- `DOBRO(2+3)` vira `2+3*2`. Como `*` tem prioridade, fica 2 + 6 = **8** (e não 10).

A macro só faz troca de texto, não calcula o argumento antes. Por isso precisa de parênteses em volta de cada `x` e da expressão toda.

**b) Por que a diretiva #define não termina com ponto e vírgula? Por que, por convenção, usamos identificadores em maiúsculas?**

Resposta: Porque `#define` não é um comando do C, é uma diretiva do pré-processador, e tudo depois do nome é copiado literalmente. Se colocar `;`, ele também é copiado para onde a macro for usada e pode quebrar a expressão (ex.: `x = PI * 2;` viraria `x = 3.14; * 2;`). Maiúsculas são convenção para diferenciar logo de cara o que é macro/constante do que é variável ou função.

**c) Explique por que #define PRN (n) printf("%d", n) está incorreto e qual é a forma correta. Aponte também uma diferença entre uma macro com argumentos e uma função comum.**

Resposta: Por causa do espaço entre `PRN` e `(n)`. Com o espaço, o pré-processador acha que `PRN` é uma constante simples e que o texto de troca é `(n) printf("%d", n)`. A forma certa é sem espaço:

```c
#define PRN(n) printf("%d", n)
```

Diferença: a macro é trocada pelo texto antes da compilação (não existe chamada, nem verificação de tipo, e o código é repetido em cada uso), enquanto a função existe uma vez só na memória, é chamada em tempo de execução e o compilador verifica os tipos dos parâmetros.

---

### Questão 06. Diretivas #include, #undef e Compilação Condicional
Considere o trecho:

```c
#include <stdio.h>
#include "areas.h"

#define SOMA(x,y) ((x)+(y))
#undef SOMA

#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    printf("Modo normal\n");
#endif
```

**a) Qual é a diferença entre #include <stdio.h> e #include "areas.h"? Em que situação usamos cada sintaxe?**

Resposta: Com `< >` o pré-processador procura o arquivo nas pastas padrão do sistema/compilador; usamos para as bibliotecas da linguagem (stdio.h, math.h...). Com `" "` ele procura primeiro na pasta do próprio projeto e depois nas pastas padrão; usamos para cabeçalhos que nós mesmos criamos, como `areas.h`.

**b) Qual é o efeito de #undef SOMA? Por que a forma #undef SOMA(x,y) está incorreta?**

Resposta: `#undef SOMA` apaga a definição da macro SOMA; daí para baixo, SOMA não existe mais (usar dá erro). A forma `#undef SOMA(x,y)` está errada porque o `#undef` recebe só o **nome** da macro, sem a lista de argumentos.

**c) Se DEBUG não foi definido, qual mensagem será impressa? Explique em que momento (pré-processamento ou execução) essa decisão é tomada e por que as diretivas não aparecem no executável final.**

Resposta: Imprime **"Modo normal"**. A decisão é tomada no **pré-processamento**, antes de compilar: o pré-processador olha se DEBUG existe e simplesmente remove do código o trecho que não vale. O compilador só recebe `printf("Modo normal\n");`. As diretivas (`#ifdef`, `#else`, `#endif`) são instruções para o pré-processador e são consumidas por ele, então nunca viram código de máquina no executável.
