#include <stdio.h> /*Para printf*/
#include <stdlib.h> /*Para sytem()*/
//#include <locale.h>
#include <windows.h>


int main (){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    //setlocale(LC_ALL, "portuguese");// Marcador para colocar toda linguagem em português
    printf("Este é o número %d.\n\tExemplo de uso de uma \"variável\".\a\n\n", 5);
    system("PAUSE"); /*Pausa o console*/

    return 0;

}