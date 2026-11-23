/* Questão 22. Biblioteca de Áreas com Arquivo de Cabeçalho — Crie um arquivo areas.h
contendo a constante PI e as macros A_CIRC(raio), A_RET(base,alt) e A_TRI(base,alt), todas
com parênteses de proteção. Em um programa principal que utilize #include "areas.h", leia os
dados do usuário e exiba as áreas calculadas.
*/

#include <stdio.h>
#include "areas.h" // nosso cabeçalho, fica na mesma pasta

int main()
{
    float raio, baseRet, altRet, baseTri, altTri;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    printf("Base e altura do retangulo: ");
    scanf("%f %f", &baseRet, &altRet);

    printf("Base e altura do triangulo: ");
    scanf("%f %f", &baseTri, &altTri);

    printf("Area do circulo: %.2f\n", A_CIRC(raio));
    printf("Area do retangulo: %.2f\n", A_RET(baseRet, altRet));
    printf("Area do triangulo: %.2f\n", A_TRI(baseTri, altTri));

    return 0;
}
