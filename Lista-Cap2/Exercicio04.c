/*Questão 04. Operadores de Atribuição Composta e Precedência — Os operadores de
atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição
simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução
sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus
cálculos apresentando a ordem de avaliação passo a passo:

int a = 1, b = 2, c = 3, d = 4;

a += b + c ->
              b + c =5 
              a = a + 5= 1 +5 = 6               // Valor final de a = 6

b *= c = d + 2 -> 
                    d + 2  →  c = 4 + 2 = 6        (c agora vale 6)
                    b *= c     →  b = b * c = 2 * 6 = 12         // Valores finais de b e c = 12 e 6

d %= a + a + a ->
                    a + a + a = 6 + 6 + 6 = 18
                    d = d % 18 = 4 % 18 = 4     (4 dividido por 18 dá resto 4, já que 4 é menor que 18)          // Valor final de d = 4

d -= c -= b -= a -> b -= a  
                             b = b - a = 12 - 6 = 6      (b agora vale 6)
                             c -= b   →  c = c - b = 6 - 6 = 0 (c agora vale 0)
                             d -= c   →  d = d - c = 4 - 0 = 4        // Valor final de d, c e b = (b=6, c= 0, d=4)
a += b += c += 7  ->    c += 7   →  c = c + 7 = 0 + 7 = 7        (c agora vale 7)
                        b += c   →  b = b + c = 6 + 7 = 13        (b agora vale 13)
                        a += b   →  a = a + b = 6 + 13 = 19       // Valor final de a, b e c = (a=19, b=13)
*/


