/**
 * Traccia #8
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int v[2][10];
    int i;

    /* Inizializzazione del generatore di numeri casuali */
    srand(time(NULL));

    /* Inizializzazione degli array(s) */
    for(i = 0; i < 10; ++i) {
        v[0][i] = 1 + rand() % 10;     /* valori tra 1 e 10  */
        v[1][i] = 11 + rand() % 10;    /* valori tra 11 e 20 */
    }

    /* Stampa dei risultati */
    printf("Array a[] (valori tra 1 e 10):\n");
    for(i = 0; i < 10; ++i)
        printf("%3i|", v[0][i]);
    printf("\n");
    
    printf("Array b[] (valori tra 11 e 20):\n");
    for(i = 0; i < 10; ++i)
        printf("%3i|", v[1][i]);
    printf("\n");

    return 0;
}
