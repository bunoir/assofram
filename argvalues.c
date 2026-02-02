#include <stdio.h>

void myfunc(int num, char c);

int main()
{
    int num = 70;
    char c = 'H';
    
    printf("Prima della chiamata...\n");
    printf("La variabile num vale %d, la variabile c vale %c\n", num, c);

    myfunc(num, c);
    
    printf("Dopo la chiamata...\n");
    printf("La variabile num vale %d, la varibile c vale %c\n", num, c);

    return 0; 
}

void myfunc(int num, char c)
{
    num = -1;
    c = '!';
    printf("L'argomento num vale: %i e l'argomento c vale: %c\n", num, c);
}
