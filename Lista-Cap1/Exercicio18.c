/*Questão 18. Desenvolva um programa completo em C que declare variáveis de ponto flutuante para os  seguintes itens e seus preços unitários: Lápis (4.88), Borrachas (234.54), Canetas (42.04), Cadernos  (8.00) e Fitas (13.05). 
Utilize a função printf() para exibir esses dados no console em formato de tabela,  alinhados à direita, com largura mínima de campo de 12 caracteres e precisão de duas casas decimais,  conforme a saída abaixo: 
Lapis 4.88 
Borrachas 234.54 
Canetas 42.04 
Cadernos 8.00 
Fitas 13.05

*/

#include <stdio.h>

int main()
{
    float lapis = 4.88;
    float borracha = 234.54;
    float caneta = 42.04;
    float caderno = 8.00;
    float fita = 13.05;

     printf("%-12s%12.2f\n%-12s%12.2f\n%-12s%12.2f\n%-12s%12.2f\n%-12s%12.2f\n",
           "Lapis", lapis, "Borrachas", borracha, "Canetas", caneta,
           "Cadernos", caderno, "Fitas", fita);
           
    return 0;

}