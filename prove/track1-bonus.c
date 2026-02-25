#include <stdio.h>
#include <stdlib.h>

/*
 * Restituisce il prodotto dei due parametri a e b
*/
int mult(int a, int b) {
    return a * b;
}

int main(void) {
    int num1, num2, tot;
    
    /* Richiede all'utente l'inserimento di due numeri interi */
    printf("Inserisci due numeri interi separati da spazio: ");
    /* Controlla che l'input dell'utente sia coerente con la richiesta */
    if(scanf("%i%i", &num1, &num2) != 2) {
        printf("Dati non validi!\n");
        exit(1);
    }

    /* chiama la funzione mult e memorizza il suo valore di ritorno in tot */
    tot = mult(num1, num2);

    /* mostra all'utente il risultato finale (prodotto di num1 e num2) */
    printf("Il prodotto di %i e %i è: %i\n",num1, num2, tot);
    
    return 0;
}
