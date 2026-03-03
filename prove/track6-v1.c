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
        /* Controlliamo la parità di i */
        if(i % 2 == 0)
            /* i è pari */
            arr[i] = 0;
        else
            /* i è dispari */
            arr[i] = 1;
    }
    
    /* Stampa a video dei valori dell'array */
    for(i = 0; i < 10; ++i) {
        printf("arr[%i] = %i\n", i, arr[i]);
    }

    return 0;
}
