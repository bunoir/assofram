/*
 * Traccia #6
 *
 *
 */

#include <stdio.h>

int main(void) {
    int i, arr[10];    

    /* Inizializzazione dell'array */
    for(i = 0; i < 10; ++i) {
        /* Assegnamo il valore in base al resto della divisione per due */
        /* (numeri pari daranno resto 0, numeri dispari invece 1)       */
        /* In questo modo evitiamo di fare un controllo.                */
        arr[i] = i % 2;
    }
    
    /* Stampa a video dei valori dell'array */
    for(i = 0; i < 10; ++i) {
        printf("arr[%i] = %i\n", i, arr[i]);
    }

    return 0;
}
