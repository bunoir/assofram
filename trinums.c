/*
    trinums.c
    
    Calcola il numero triangolare T(n) = 1 + 2 + 3 + ... + n.
    Il numero n viene richiesto, come numero intero all'utente.
    In questa verisone del programma viene usato un ciclo while.
*/
#include <stdio.h>

int main(void)
{
    int n;          /* numero intero inserito dall'utente */
    int i;          /* contatore generico */
    int sum;        /* somma dei primi n numeri interi positivi */

    /* intestazione programma per l'utente */
    printf("=== Numeri Triangolari ===========================\n");
    printf("  Calcola il Numero Triangolare di ordine n\n");
    printf("==================================================\n\n"); 

    /* richiede all'utente l'inserimento di un numero intero positivo */
    /* e memorizza il suo valore nella variabile n.                   */
    printf("Inserire l'ordine del numero triangolare: ");
    scanf("%i", &n);

    /* calcola il valore del numero triangolare sommando i primi n   */
    /* valori interi e aggiornando il risultato in sum               */
    i = 1;
    sum = 0;
    while(i <= n)
    {
        sum += i;
        ++i;
    }

    /* mostra il risultato all'utente e termina il programma */
    printf("T(%i) = %i\n", n, sum);
    return 0;
}
