/*
 * Traccia #7 - Somma selettiva elementi di un array
 *
 * Il candidato scriva un programma che richieda all'utente l'inserimento di 10
 * numeri interi in un array e mostri a video la somma di tutti gli elementi di
 * indice pari (indice 0 compreso) e quella di tutti gli elementi di indice
 * dispari.
 * Si consideri l'input dell'utente corretto (nessun controllo necessario).
 */
#include <stdio.h>

int main(void) {
    int i;              /* Contatore/Indice per cicli                   */
    int arr[10];        /* Array contenenente i valori da sommare       */
    int even_sum = 0    /* Accumulatore somma elementi di posto pari    */
    int odd_sum = 0;    /* Accumulatore somma elementi di posto dispari */
    
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

    /* Stampa a video le somme richieste */
    printf("Somma elementi di posto pari   : %i\n", even_sum);
    printf("Somma elementi di posto dispari: %i\n", odd_sum); 
    
    return 0;
}
