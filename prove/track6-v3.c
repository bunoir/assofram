/*
 * Traccia #6
 *
 *
 */

#include <stdio.h>

#define LIMIT 10

int main(void) {
    int i, arr[LIMIT];    

    /* Inizializzazione dell'array */
    for(i = 0; i < LIMIT; ++i) {
        /* Controlliamo la parità di i */
        if(i % 2 == 0)
            /* i è pari */
            arr[i] = 0;
        else
            /* i è dispari */
            arr[i] = 1;
    }
    
    /* Stampa a video dei valori dell'array */
    for(i = 0; i < LIMIT; ++i) {
        printf("arr[%i] = %i\n", i, arr[i]);
    }

    return 0;
}
