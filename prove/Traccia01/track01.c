/**
 * Traccia #1 - Funzione prodotto tra due numeri interi
 *
 * Il candidato Il candidato scriva un programma che legga in input 2 numeri
 * interi e li passi poi ad una funzione che ne restituisce il prodotto.
 * Tale prodotto sarà poi mostrato a video all'utente.
 * Si assuma l'input dell'utente corretto (nessun controllo necessario).
 */
#include <stdio.h>

/*
 * mult(a, b)
 *
 * Restituisce il prodotto dei due parametri interi a e b
 */
int mult(int a, int b) {
    return a * b;
}

int main(void) {
    int num1;   /* Valore numerico inserito dall'utente        */
    int num2;   /* Valore numerico inserito dall'utente        */
    int tot;    /* Valore restituito dalla funzione mult(a, b) */
    
    /* Richiede all'utente l'inserimento di due numeri interi */
    printf("Inserisci due numeri interi separati da spazio: ");
    scanf("%i%i", &num1, &num2);    /* memorizza i valori in num1 e num2 */

    /* chiama la funzione mult e memorizza il suo valore di ritorno in tot */
    tot = mult(num1, num2);

    /* mostra all'utente il risultato finale (prodotto di num1 e num2) */
    printf("Il prodotto di %i e %i è: %i\n",num1, num2, tot);
    
    return 0;
}
