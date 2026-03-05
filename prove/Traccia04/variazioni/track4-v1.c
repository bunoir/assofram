/**
 * Traccia 5 - I/O Matrice quadrata di dimensione n
 *
 * Il candidato scriva un programma che richieda l'inserimento degli elementi
 * di una matrice quadrata di numeri interi di dimensione n, 0 < n < 5
 * inserito dall'utente, e stampi poi a video la matrice formattando
 * opportunamente l'output. Il programma dovrà altresì verificare l'input di n
 * gestendo il caso in cui il suo valore non rispetti il vincolo richiesto.
 * Nessun controllo sull'input utente è richiesto.
 */
#include <stdio.h>

int main(void) {
    int n;              /* Dimensione della matrice quadrata data dall'utente   */
    int i,j;            /* Contatori generici per cicli                         */
    int matrix[5][5];   /* Matrice quadrata 5x5 che conterrà i dati dell'utente */

    /* Richiesta della dimensione della matrice quadrata */
    printf("Inserisci la dimensione della matrice (0 < n < 5): ");
    scanf("%i", &n);
     
    /* Inserimento elementi nella matrice */
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            printf("Inserisci l'elemento [%i][%i]: ",i, j);
            scanf("%i", &matrix[i][j]);
        }
    }
    
    /* Stampa elementi della matrice */
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            printf("%5i", matrix[i][j]);
        }
        printf("\n");   /* Va a capo alla fine di ogni riga della matrica */
    }
    
    return 0;
}
