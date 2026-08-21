/*Questão 03. O uso correto de comentários é fundamental para documentar 
    e tornar o código  compreensível.
 Com base nos tipos de comentários estudados (múltiplas linhas e linha única),
  escreva  um programa simples em C e documente-o de forma clara.
   Siga o modelo de formatação de código  ilustrado abaixo:
/* Esse programa mostra o uso de comentários em várias linhas 
* e mostra também o uso de comentários em uma única linha 
*  
* Primeiro programa 
***************************************************************/ 
/* Prog1.C */



/*Cesar School | Programação Imperativa e Funcional | Página 1 
#include <stdio.h> /* Para printf() */
//#include <stdlib.h>/* Para system() */ 
//int main() /* Função main */ 
//{ /* início do corpo da função main */ 
 //printf("Primeiro programa."); /* Chamada à função printf */ 
 //system("PAUSE"); /* Chamada à função system */ 
 //return 0; 
//}/* Fim do corpo da função main */

#include <stdio.h> //é uma biblioteca permite usar funções de entrada e saída 

int main () // main() É a porta de entrada do programa. Int indica que a função irá retornar em um número inteiro
{
    char primeiroNome[30];
    printf("\n Qual seu primeiro nome: ");
    scanf("%s", primeiroNome); // programa finalizou, o 0 significa que 


    printf("\n Seu nome : %s", primeiroNome);
    return 0;// programa finalizou, o 0 significa que 
}