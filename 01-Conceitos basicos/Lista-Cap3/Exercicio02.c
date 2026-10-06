/*Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco — Um estudante escreveu o
programa abaixo com o intuito de calcular a soma dos quadrados dos números inteiros de 1 a 9,
mas encontrou falhas durante a compilação e execução:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i < 10; i++) {
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}

a) Por que o compilador emitirá um erro de sintaxe/declaração na instrução printf final?
    A variável soma foi declarada dentro das chaves do for, então só existe ali. Quando o laço termina, ela é destruída. O printf está fora do bloco,então o compilador não reconhece soma e acusa erro de variável não declarada 

b) Mesmo que a instrução printf fosse movida para dentro do bloco do laço for, por que o
valor impresso para soma estaria conceitualmente incorreto a cada iteração?
    Porque int soma = 0; está dentro do laço: a cada volta, soma é recriada e zerada.

c) Apresente o código corrigido e explique o conceito de visibilidade, escopo de bloco e tempo
de vida de variáveis na linguagem C.
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // fora do laço: existe até o fim do main e acumula

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}