/*
 * Traccia #6 - Inizializzazione selettiva elementi array
 *
 * Il candidato scriva un programma che inizializzi un array di interi di
 * dimensione 10 assegnando il valore 0 agli elementi di indice pari 
 * (indice 0 compreso) e il valore 1 agli elementi di indice dispari.
 * Si mostri poi a video il risultato dell'inizializzazione.
 */
#include <stdio.h>

int main(void) {
    int i;          /* Contatore generico per cicli */       
    int arr[10];    /* Array da inizializzare       */ 

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
