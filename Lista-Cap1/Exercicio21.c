/*Questão 21. Desenvolva três versões independentes de programas em C para produzir no console a  saída de texto abaixo. 
A primeira versão deve usar uma única chamada de printf();
 a segunda deve usar  exatamente duas instruções de impressão independentes;
  e a terceira deve desenhar as frases  emolduradas utilizando caracteres gráficos de caixa: 
Treinamento em programação. 
Linguagem C.

*/

#include <stdio.h>
#include <windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Treinamento em programação.\nLinguagem C.\n");

    return 0;

}