#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for (int i = 1; i <= 100; i += 3)
    {
        printf("%3d\n" , i);
        
    }
    
    system("PAUSE");
    return 0;

}