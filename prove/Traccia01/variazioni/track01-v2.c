#include <stdio.h>

/*
 * Restituisce il prodotto dei due parametri a e b
*/
int mult(int a, int b) {
    int p;

    p = a * b;

    return p;
}

int main(void) {
    int num1, num2;
    
    /* Richiede all'utente l'inserimento di due numeri interi */
    printf("Inserisci due numeri interi separati da spazio: ");
    scanf("%i%i", &num1, &num2);    /* memorizza i valori in num1 e num2 */

    /* mostra all'utente il risultato finale (prodotto di num1 e num2) */
    printf("Il prodotto di %i e %i è: %i\n", num1, num2, mult(num1, num2);
    
    return 0;
}
