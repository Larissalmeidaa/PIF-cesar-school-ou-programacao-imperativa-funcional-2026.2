/*Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) 
e de  lógica contidos no programa abaixo:
main()                 --> Falta a biblioteca #include.Faltou o int no main. Falta return 0 para finalizar o código.
{ 
 int a=1; b=2; c=3:    --> Falta o ponto e vírgula. Apenas o "a" declarado int
 printf("0s números são: %d%d%d\n, a, b, c, d);  --> Falta aspas no final.Não tem a variável d declarada.
 system("pause");      --> Faltou declarar a bibliotece #include <stdlib.h>.O pause tem que estar em maiusculo.
}

*/

/*COMO SERIA O CÓDIGO*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("Os numeros sao: %d %d %d\n", a, b, c);
    system("PAUSE");

    return 0;

}