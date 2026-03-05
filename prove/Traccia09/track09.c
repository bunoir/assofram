/**
 * Traccia #9 - Inizializzazione vincolata di un array
 *
 * Il candidato scriva un programma che inizializzi esclusivamente con valori
 * casuali pari compresi tra 0 e 100 un array di interi di dimensione 10.
 * Si mostri poi a video l'array inizializzato.
 * Suggerimento: si usi il costrutto "continue".
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int v[10];      /* Array da inizializzare                                */
    int i;          /* Indice elemento corrente dell'array                   */
    int x;          /* Valore casuale da assegnare ad un elemento dell'array */

    /* Attiviamo il generatore di numeri casuali */
    srand(time(NULL));

    /* Inizializzazione casuale di v[] con SOLI numeri pari tra 0 e 100      */
    i = 0;  /* Partiamo con l'indice di posizione 0 */
    while(i < 10) {
        /* Genera un numero intero compreso tra 0 e 100 e lo mette in x      */
        x = rand() % 101;
        
        /* Se il numero generato è pari usa "continue" per non proseguire    */
        /* nelle istruzioni successive e ritornare al while iniziale.        */
        if(x % 2 != 0) continue;
        
        /* Arrivati qui implica che in x è presente un numero pari, lo       */
        /* assegna quindi all'elemento corrente (i) di v[] e si sposta       */
        /* sull'elemento successivo.                                         */
        v[i] = x;       
        i++;
    }

    /* Stampa dell'array */
    printf("\nArray inizializzato con numeri casuali pari:\n");
    for(i = 0; i < 10; ++i)
        printf("%i ", v[i]);

    /* Usciti dal ciclo stampiamo due ritorni a capo */
    printf("\n\n");
    
    return 0;
}
