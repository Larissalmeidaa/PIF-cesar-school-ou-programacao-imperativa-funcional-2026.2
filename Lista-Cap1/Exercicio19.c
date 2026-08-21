/*Questão 19. Escreva um programa em C que contenha uma única chamada de função para impressão  (um único printf()) e produza exatamente a saída formatada abaixo com tabulação em cascata: 
um 
 dois 
 três
 
*/
#include <stdio.h>
#include <windows.h>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    printf("um\ndois\ntrês\n");

    return 0;

}