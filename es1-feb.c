/*
 * es2-feb.c
 *
 * Esercizio 1 del pdf esercizi-feb2026.pdf
*/
#include <stdio.h>
#define PI  3.14159f

int main(void) {
    float radius = 10.0f, volume;

    volume = (4.0f/3.0f) * PI * radius * radius * radius;

    printf("Il volume della sfera è %.2f metri cubi\n", volume);

    return 0;
}
