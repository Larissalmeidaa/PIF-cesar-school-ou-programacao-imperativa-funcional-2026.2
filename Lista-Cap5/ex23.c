/* Questão 23. Macro versus Função — Defina a macro #define DOBRO(x) x*2 e a função int
dobro(int x). Na main(), chame ambas com o argumento 2+3, imprima os resultados e
explique em comentário por que eles diferem. Em seguida, corrija a macro com parêneteses
de proteção e teste novamente.
*/

#include <stdio.h>

#define DOBRO(x) x*2               // versão errada (sem parênteses)
#define DOBRO_CORRIGIDO(x) ((x) * 2) // versão corrigida

int dobro(int x); // protótipo

int main()
{
    printf("Macro DOBRO(2+3)           = %d\n", DOBRO(2+3));
    printf("Funcao dobro(2+3)          = %d\n", dobro(2+3));
    printf("Macro DOBRO_CORRIGIDO(2+3) = %d\n", DOBRO_CORRIGIDO(2+3));

    return 0;
}

// devolve o dobro de x
int dobro(int x)
{
    return x * 2;
}

/* Por que diferem:
   - A macro só troca texto. DOBRO(2+3) vira  2+3*2 . Como * tem prioridade
     sobre +, a conta fica 2 + 6 = 8 (errado).
   - A função primeiro calcula o argumento (2+3 = 5) e só depois passa o 5
     para o parâmetro x, então devolve 5 * 2 = 10 (certo).
   - Com parênteses, DOBRO_CORRIGIDO(2+3) vira ((2+3) * 2) = 10, igual à função.

   Saída obtida:
   Macro DOBRO(2+3)           = 8
   Funcao dobro(2+3)          = 10
   Macro DOBRO_CORRIGIDO(2+3) = 10
*/
