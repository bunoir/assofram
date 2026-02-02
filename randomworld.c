#include <stdio.h>
#include <stdlib.h> /* rand() e srand() */
#include <time.h> /* time() */

int main(void)
{
    int num, i;

    srand(time(NULL));     /* inizializza il generatore random */
    
    for(i = 0; i < 50; i++)
    {
        num = 1 + rand() % 6;
        printf("Numero generato: %i\n", num);
    }
    
    return 0;
}
