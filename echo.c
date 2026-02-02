/*
    echo.c

    Esempio di utilizzo di stringhe di controllo,  specificatori di formato
    e dimensione dei campi.
*/
#include <stdio.h>

int main(void)
{
    char c1, c2, c3;
    int i;
    float x;
    double y;

    printf("\n%s\n%s\n", "Inserisci tre caratteri,", "un intero, un float e un double");
    scanf("%c%c%c%i%f%lf", &c1, &c2, &c3, &i, &x, &y);
    
    printf("%3c%3c%3c%5i%17e%17e\n\n", c1, c2, c3, i, x, y);
    
    return 0;
}
