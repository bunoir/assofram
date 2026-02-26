#include <stdio.h>

int main(void) {
    int n;              /* Dimensione della matrice quadrata data dall'utente   */
    int i,j;            /* Contatori generici per cicli                         */
    int matrix[5][5];   /* Matrice quadrata 5x5 che conterrà i dati dell'utente */
    int is_valid;       /* Flag per la validità del valore di n                 */
    
    do {
        /* Imposta il flag */
        is_valid = 1;

        /* Richiesta della dimensione della matrice quadrata */
        printf("Inserisci la dimensione della matrice (0 < n < 5): ");
        scanf("%i", &n);
        
        /* Controlla se la dimensione rispetta le specifiche richieste */
        if( n <= 0 || n >= 5){
            /* n non è compreso tra 0 e 5 */
            printf("Valore non valido. Riprova inserimento.\n");
            is_valid = 0;
        }
    } while(!is_valid);

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
        printf("\n");
    }
    
    return 0;
}
