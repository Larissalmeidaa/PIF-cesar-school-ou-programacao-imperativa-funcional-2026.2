/*Questão 22. Desenhe no console um carro e uma caminhonete utilizando caracteres de bloco e de  controle estudados no capítulo. 
Utilize sequências de escape em hexadecimal (como \xDC e \xDF) para  renderizar a seguinte arte gráfica: 
▄▄████▄▄ 
▀O▀▀▀▀▀O▀ 
 ▄▄█ ██████ 
▀O▀▀▀▀▀OO▀

*/

#include <stdio.h>

int main()
{
    //Linha 1: ▄▄████▄▄
    printf("%c%c%c%c%c%c%c%c\n",0xDC, 0xDC, 0xDB, 0xDB, 0xDB, 0xDB, 0xDC, 0xDC);
    
    //Linha 2:▀O▀▀▀▀▀O▀
    printf("%c%c%c%c%c%c\n", 0xDF, '0', 0xDF, 0xDF, 0xDF, 0xDF, '0', 0xDF);

    // Linha 3:  ▄▄█ ██████
    printf(" %c%c%c %c%c%c%c%c%c\n", 0xDC, 0xDC, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB);

    // Linha 4: ▀O▀▀▀▀▀OO▀
    printf("%c%c%c%c%c%c%c%c%c%c\n", 0xDF, 'O', 0xDF, 0xDF, 0xDF, 0xDF, 0xDF, 'O', 'O', 0xDF);


}