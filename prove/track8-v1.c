/**
 * Traccia #8
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int a[10], b[10];
    int i;

    /* Inizializzazione del generatore di numeri casuali */
    srand(time(NULL));

    /* Inizializzazione degli array(s) */
    for(i = 0; i < 10; ++i) {
        a[i] = 1 + rand() % 10;     /* valori tra 1 e 10  */
        b[i] = 11 + rand() % 10;    /* valori tra 11 e 20 */
    }

    /* Stampa dei risultati */
    printf("Array a[] (valori tra 1 e 10):\n");
    for(i = 0; i < 10; ++i)
        printf("%3i|", a[i]);
    printf("\n");
    
    printf("Array b[] (valori tra 11 e 20):\n");
    for(i = 0; i < 10; ++i)
        printf("%3i|", b[i]);
    printf("\n");

    return 0;
}
