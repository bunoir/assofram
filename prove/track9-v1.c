/**
 * Traccia #9
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int v[10];
    int i;
    int x;

    /* Attiviamo il generatore di numeri casuali */
    srand(time(NULL));

    /* Inizializzazione casuale di v[] con SOLI numeri pari */
    i = 0;
    while(i < 10) {
        x = rand() % 101;   /* Numeri tra 0 e 100 */

        if(x % 2 != 0) continue; /* Scarta i numeri dispari */

        v[i] = x;
        i++;
    }

    /* Stampa dell'array */
    printf("\nArray inizializzato con numeri casuali pari:\n");
    for(i = 0; i < 10; ++i)
        printf("%i ", v[i]);
    printf("\n\n");
    
    return 0;
}
