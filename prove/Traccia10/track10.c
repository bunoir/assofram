/**
 * Traccia #10 - Ricerca del massimo in un array
 *
 * Il candidato scriva un programma che richieda all'utente l'inserimento di 10
 * valori numerici interi e successivamente ricerchi il valore massimo tra
 * quelli contenuti nel vettore mostrando a video il risultato.
 * Si consideri valido l'input utente (nessun controllo necessario).
 */
#include <stdio.h>

int main(void) {
    int v[10];      /* Array di interi in cui ricercare il massimo  */
    int i;          /* Indice/Contatore generico                    */
    int max;        /* Varibile che contiene il massimo trovato     */

    /* Presentazione del funzionamento del programma */
    printf("Rierca del valore  massimo in un array\n\n");

    /* Richiede all'utente l'inserimento dei valori nell'array */
    for(i = 0; i < 10; ++i) {
        printf("Inserisci il valore #%i: ", i + 1);
        scanf("%i", &v[i]);
    }
    
    /* Ricerca del massimo tra gli elementi dell'array */
    max = v[0];     /* pone il max pari al primo elemento */
    for(i = 1; i < 10; ++i)     /* Ricerca il max tra i restanti 9 elementi 1...9   */
        /* Se il valore dell'elemento corrente è maggiore del massimo attuale,      */
        /* tale valore diviene il nuovo massimo, pertanto la variabile max viene    */
        /* aggiornata al nuovo valore.                                              */
        if(v[i] > max) max = v[i];

    /* Stampa del valore massimo trovato tra gli elementi */
    printf("Il massimo tra gli elementi inseriti è: %i\n", max);

    return 0;
}
