/*Questão 05. Avaliação de Expressões Lógicas e Relacionais — Determine o resultado lógico (1
para verdadeiro, 0 para falso) de cada uma das expressões relacionais e lógicas a seguir,
assumindo que as variáveis foram inicializadas como: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y
= 4.4;. Consulte a tabela de precedência do Capítulo 2.

a) i < j + 3                  => Resultado: j + 3 = 2 + 3 = 5
                                            i < 5  →  1 < 5  →  Verdadeiro
b) 2 * i - 7 <= j - 8          => Resultado: 2 * i = 2 * 1 = 2
                                             2 - 7 = -5
                                             j - 8 = 2 - 8 = -6
                                            -5 <= -6  →  Falso (-5 é maior que -6)
c) -x + y >= 2.0 * y           => Resultado: -x = -3.3
                                             -x + y = -3.3 + 4.4 = 1.1
                                             2.0 * y = 2.0 * 4.4 = 8.8
                                             1.1 >= 8.8  →  Falso
d) x == y                      => Resultado: 3.3 == 4.4  →  Falso (valores diferentes)
e) !(n - j)                    => Resultado: n - j = 2 - 2 = 0
                                             !(0)  →  o NOT de zero (falso) é verdadeiro
f) !n - j                      => Resultado: !n = !(2) = 0        (n é diferente de zero, então é "verdadeiro"; o NOT disso é 0)
                                             !n - j = 0 - 2 = -2
g) i && j && k                 => Resultado: i = 1 (verdadeiro), j = 2 (verdadeiro), k = 3 (verdadeiro)
                                             verdadeiro && verdadeiro && verdadeiro  →  Verdadeiro
h) i || j - 3 && k             => Resultado: j - 3 = 2 - 3 = -1              (diferente de zero → verdadeiro)
                                             (-1) && k  →  verdadeiro && verdadeiro (k=3)  →  Verdadeiro
                                             i || Verdadeiro  →  Verdadeiro (i já é verdadeiro, e o || nem precisaria olhar o resto)
i) i < j && 2 >= k             => Resultado: i < j    →  1 < 2  →  Verdadeiro
                                             2 >= k   →  2 >= 3  →  Falso
                                             Verdadeiro && Falso  →  Falso
j) i == 2 || j == 4 || k == 5  => Resultado: i == 2  →  1 == 2  →  Falso
                                             j == 4  →  2 == 4  →  Falso
                                             k == 5  →  3 == 5  →  Falso
                                             Falso || Falso || Falso  →  Falso
*/


