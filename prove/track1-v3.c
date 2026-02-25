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
    int num1, num2, tot;
    
    /* Richiede all'utente l'inserimento di due numeri interi */
    printf("Inserisci il primo numero: ");
    scanf("%i", &num1);

    printf("Inserisci il secondo numero: ");
    scanf("%i", &num2);

    /* mostra all'utente il risultato finale (prodotto di num1 e num2) */
    printf("Il prodotto di %i e %i è: %i\n", num1, num2, mult(num1, num2));
    
    return 0;
}
