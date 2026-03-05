/**
 * Traccia #5
 *
 * Il candidato scriva un programma che, richiesti in input due numeri reali, ne determini
 * il più piccolo dando a video l'informazione.
 */
#include <stdio.h>

int main(void) {
    float num1, num2, min;
    
    printf("Questo programma determina il minore tra i due valori inseriti dall'utente\n\n");
    
    printf("Inserisci due valori numerici separati da spazio: ");
    scanf("%f%f", &num1, &num2);

    min = (num1 < num2) ? num1 : num2;

    printf("Il valore minore tra quelli inseriti è: %f\n", min);

    return 0;
}
