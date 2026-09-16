#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota, media = 0;
    // Ou fazer float media;

    for (int i = 1; i <= 4; i++)
    {
        printf("Digite a %dª nota: ", i); /* code */
        scanf("%f", &nota);
        media += nota;
    }
    media = media / 4;
    printf("A média das notas é: %.2f\n", media);

    system("PAUSE");

    return 0;

}