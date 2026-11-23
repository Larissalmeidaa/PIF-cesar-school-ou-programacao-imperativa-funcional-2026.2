/* Questão 14. Cifra de César (Cap. 7) — Leia uma mensagem em letras maiúsculas (com
gets()) e um inteiro k. Criptografe a mensagem deslocando cada letra k posições no alfabeto,
voltando ao início após o Z (por exemplo, com k = 3, "ABC XYZ" vira "DEF ABC"). Caracteres
que não sejam letras devem ser mantidos. Exiba o resultado com puts().
*/

#include <stdio.h>

int main()
{
    char msg[200];
    int k, i;

    printf("Digite a mensagem (maiusculas): ");
    gets(msg);   // o enunciado pede gets(); fora da prova, prefira fgets()
    printf("Digite o deslocamento k: ");
    scanf("%d", &k);

    k = ((k % 26) + 26) % 26;   // normaliza k para 0..25 (aceita k negativo ou maior que 26)

    for (i = 0; msg[i] != '\0'; i++)
    {
        if (msg[i] >= 'A' && msg[i] <= 'Z')
            msg[i] = 'A' + (msg[i] - 'A' + k) % 26;
    }

    printf("Mensagem criptografada: ");
    puts(msg);

    return 0;
}
