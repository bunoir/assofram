#include <stdio.h>

/* Dichiarazione delle variabili */
int v1, v2, t; 

int main(void)
{
    printf("Questo programma effettua lo swap tra due variabili\n\n");
    
    /* Assegno dei valori alle variabili v1 e v2 */
    v1 = 3;
    v2 = 5;
    
    /* Mostra all'utente i valori iniziali delle variabili */
    printf("Valore iniziale di v1: %d\n", v1);
    printf("Valore iniziale di v2: %d\n", v2);

    /* Algoritmo di swap */
    t = v1;     /* Conservo in t il valore di v1 */
    v1 = v2;    /* Copio in v1 il valore di v2 */ 
    v2 = t;     /* Recupero da t il valore originale di v1 e lo copio in v2 */
    
    /* Stampa un messaggio finale */
    printf("\nScambio effettuato\n\n");
    printf("Valore finale di v1: %d\n", v1);
    printf("Valore finale di v2: %d\n", v2);
}

