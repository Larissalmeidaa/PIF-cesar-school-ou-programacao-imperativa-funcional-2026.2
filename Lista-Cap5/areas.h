/* areas.h — cabeçalho da Questão 22 (usado pelo ex22.c)
   Constante PI e macros de área com parênteses de proteção.
*/

#define PI 3.14159

#define A_CIRC(raio) (PI * (raio) * (raio))
#define A_RET(base, alt) ((base) * (alt))
#define A_TRI(base, alt) ((base) * (alt) / 2)
