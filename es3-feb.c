/*
 * es3-feb.c
 *
 * Esercizio 3 del pdf esercizi-feb2026.pdf
*/
#include <stdio.h>

int main(void) {
    float amount, taxes;

    printf("Inserisci la somma in euro e centesimi (p.es 20.55): ");
    scanf("%f", &amount); 

    taxes = amount * 0.05f;

    printf("Somma con tasse del 5%%: %.2f\n", amount + taxes);

    return 0;
}
