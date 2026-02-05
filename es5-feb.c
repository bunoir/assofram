/*
 * es5-feb.c
 *
 * Esercizio 5 del pdf esercizi-feb2026.pdf
*/
#include <stdio.h>

int main(void) {
    int x, xpow2, xpow3, xpow4, xpow5, result, horner;

    printf("Inserisci un valore intero per x: ");
    scanf("%d", &x); 

    xpow2 = x * x;
    xpow3 = x * xpow2;
    xpow4 = x * xpow3;
    xpow5 = x * xpow4;

    
    result = 3 * xpow5 + 2 * xpow4 - 5 * xpow3 - xpow2 + 7 * x - 6;
    horner = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    
    printf("P(%d) (calcolato con potenze): %d\n", x, result);
    printf("P(%d) (calcolato con Horner) : %d\n", x, horner); 

    return 0;
}
