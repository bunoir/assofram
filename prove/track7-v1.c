/*
 * Traccia #7
 *
 *
 */

#include <stdio.h>

int main(void) {
    int i, arr[10], even_sum = 0, odd_sum = 0;    
    
    /* Inserimento dei valori nell'array */
    for(i = 0; i < 10; ++i) {
        printf("Inserisci il valore all'indice %i: ", i);
        scanf("%i", &arr[i]);
    }

    /* Somme dei valori negli  indici pari e quelli  dispari */
    for(i = 0; i < 10; ++i) {
        /* Controlliamo la parità di i */
        if(i % 2 == 0)
            /* i è pari */
            even_sum += arr[i];
        else
            /* i è dispari */
            odd_sum += arr[i];
            
    }

    /* Stampa a video delle somme richieste */
    printf("Somma elementi di posto pari: %i\nSomma degli elementi di posto dispari: %i\n", even_sum, odd_sum);
    
    return 0;
}
