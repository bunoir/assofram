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
        printf("\n");
    }
    
    return 0;
}
