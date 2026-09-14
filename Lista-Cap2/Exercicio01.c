/*Questão 01. Truncamento de Tipos e Coerção Implícita —
 Um estudante do curso de ADS
escreveu o programa em C abaixo visando entender o comportamento de variáveis
 e atribuições
de tipos incompatíveis. 
Analise o código, compile mentalmente ou em seu ambiente de
desenvolvimento e responda às questões indicadas.
#include <stdio.h>
#include <stdlib.h>
int main() {
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
system("PAUSE");
return 0;
}
a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?
b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?
c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo
programador caso ele necessite arredondar o valor ou manter a precisão?

RESPOSTAS
A) 2
B) Truncamento por coerção implícita de tipo, isso acontece pq ao atribuir 2.97 a um consante do tipo int ao
inves do tipo double, que seria o ideal, uma vez que o int não consegue guardar decimais, o C converte
automaticamente o valor de ponto flutuante em inteiro, descartando tudo depois do ponto
C)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor_inteiro;
    valor_inteiro = 2.97;
    printf("O valor armazenado eh: %d\n", valor_inteiro);
    system ("PAUSE");

    return 0;


}

