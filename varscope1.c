#include <stdio.h>

/* Dichiarazione prototipo funzioni */
void test(void);

int g = 7;

int main(void)
{
    int myvar = 10;

    printf("Sono la funzione main() e vedo g = %i\n", g);
    printf("Sono la funzione main() e vedo myvar =%i\n", myvar);
    
    test();
    
    return 0;
}

void test(void)
{
    int myvar = 30;

    printf("Sono la funzione test() e vedo g = %i\n", g);
    printf("Sono la funzione test() e vedo myvar = %i\n", myvar);
}
