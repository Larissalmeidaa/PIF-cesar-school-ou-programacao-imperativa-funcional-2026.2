# Simulado – Capítulos 4, 5, 7 e 8 – PIF

**CESAR School** – Análise e Desenvolvimento de Sistemas (ADS)
**Disciplina:** Programação Imperativa e Funcional (PIF)
**Docente:** Prof. Danilo Farias Soares da Silva | **Semestre:** 2026.2

---

## Respostas das questões de múltipla escolha

| Questão | Resposta |
|---------|----------|
| 01 | **B** |
| 02 | **C** |
| 05 | **D** |
| 06 | **A** |
| 10 | **C** |
| 11 | **B** |
| 16 | **C** |
| 17 | **D** |

---

## Justificativas

**Questão 01 – Letra B (Y e, em seguida, Z).**
O `else` sempre se associa ao `if` mais próximo que ainda não tem `else`, independentemente da indentação. Logo, ele pertence ao `if (b > 5)`. Como `a > 5` é verdadeiro e `b > 5` é falso, o `else` é executado e imprime `Y`. O `printf("Z\n")` está fora dos `if`s e sempre é executado.

**Questão 02 – Letra C (5).**
Com `op = 2`, a execução entra no `case 2` (`t = 2`). Como não há `break`, ocorre o *fall-through* para o `case 3` (`t = 5`), onde o `break` encerra o `switch`.

**Questão 05 – Letra D (3 7).**
Em C, os parâmetros são passados por valor: `a` e `b` são cópias de `x` e `y`. A troca acontece apenas nas cópias locais, então `x` e `y` continuam valendo `3` e `7`.

**Questão 06 – Letra A (10).**
`f(4) = 4 + f(3) = 4 + 3 + f(2) = 4 + 3 + 2 + f(1) = 4 + 3 + 2 + 1 = 10`.

**Questão 10 – Letra C (15).**
`m[0][2] = 3`, `m[1][1] = 5` e `m[2][0] = 7` (diagonal secundária). `3 + 5 + 7 = 15`.

**Questão 11 – Letra B (9 PROVA2026).**
`strcat` concatena `"2026"` ao final de `"PROVA"`, resultando em `"PROVA2026"`. O `strlen` conta os caracteres sem o terminador nulo `'\0'`: 5 + 4 = 9.

**Questão 16 – Letra C (1 9).**
Estruturas podem ser atribuídas com `=`, e a atribuição copia todos os campos. Alterar `b.x` não afeta `a`, então `a.x = 1` e `b.x = 9`.

**Questão 17 – Letra D (8).**
Em uma união, todos os membros compartilham a mesma área de memória, e o tamanho é o do maior membro (respeitando o alinhamento). `char c[8]` ocupa 8 bytes, `int` ocupa 4 e `double` ocupa 8, então `sizeof(Dado) = 8`.

---

## Questões práticas

Cada questão de implementação está em seu próprio arquivo: `Questao03.c`, `Questao04.c`, `Questao07.c`, `Questao08.c`, `Questao09.c`, `Questao12.c`, `Questao13.c`, `Questao14.c`, `Questao15.c`, `Questao18.c`, `Questao19.c` e `Questao20.c`.
