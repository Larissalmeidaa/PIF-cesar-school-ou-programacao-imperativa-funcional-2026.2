/*Descreva a saída exata (incluindo quebras de linha e tabulações) 
que será impressa no  console por cada uma das seguintes instruções independentes do printf(): 
a) printf("\n\tBom dia! Shirley."); -->    Bom dia! Shirley.
b) printf("Você já tomou café? \n"); --> Você já tomou café?
c) printf("\n\nA solução não existe!\nNão insista."); Solução não existe!  Não insista.
d) printf("Duas\tlinhas\tde\tsaída\nou\tuma?"); 
e) printf("%s\n%s\n%s\n", "um", "dois", "três");

*/

#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("\n\tBom dia! Shirley.");
    printf("Você já tomou café? \n");
    printf("\n\tlinhas\de\dsaida\nou\tuma?");
    printf("Duas\tlinhas\tde\tsaída\nou\tuma?"); 
    printf("%s\n%s\n%s\n", "um", "dois", "três");

    return 0;

}