/*
 * es2-feb.c
 *
 * Esercizio 2 del pdf esercizi-feb2026.pdf
*/
#include <stdio.h>
#define PI  3.14159f

int main(void) {
    float radius, volume;

    printf("Inserisci il raggio in metri: ");
    scanf("%f", &radius); 

    volume = (4.0f/3.0f) * PI * radius * radius * radius;

    printf("Il volume della sfera è %.2f metri cubi\n", volume);

    return 0;
}
