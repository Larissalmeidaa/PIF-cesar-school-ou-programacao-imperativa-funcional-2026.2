#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota, media = 0;
    // Ou fazer float media;

    for (int i = 1; i <= 10; i++)
    {
        printf("6 x %2d = %d\n", i, i*6); /* code */
        
    }
    

    system("PAUSE");

    return 0;

}