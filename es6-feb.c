/*
 * es6-feb.c
 *
 * Esercizio 6 del pdf esercizi-feb2026.pdf
*/
#include <stdio.h>

int main(void) {
    int total, bills, rest;

    printf("Inserisci il totale in € (numero intero): ");
    scanf("%d", &total);

    bills = total / 20;
    rest = total % 20;
    printf("Banconote da 20€: %d\n", bills);

    /* Aggiorno il totale da dare ancora */
    total = rest;
    bills = total / 10;
    rest = total % 10;
    printf("Banconote da 10€: %d\n", bills);
    
    total = rest;
    bills = total / 5;
    rest = total % 5;
    printf("Banconote da 5€ : %d\n", bills);
    
    printf("Monete da 1€    : %d\n", rest);

    return 0;
}
