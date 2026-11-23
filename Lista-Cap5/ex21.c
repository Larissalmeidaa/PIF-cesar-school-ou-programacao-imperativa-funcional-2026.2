/* Questão 21. Macros Utilitárias — Defina as macros SQR(x), MAX(a,b) e MIN(a,b) com
parênteses de proteção. Na main(), leia dois inteiros e exiba o quadrado de cada um, o maior
e o menor, usando apenas as macros.
*/

#include <stdio.h>

// macros com parênteses em cada argumento e na expressão inteira
#define SQR(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Quadrado de %d: %d\n", a, SQR(a));
    printf("Quadrado de %d: %d\n", b, SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    return 0;
}
