/**
 * Traccia #5
 *
 * Il candidato scriva un programma che, richiesti in input due numeri reali, ne determini
 * il più piccolo dando a video l'informazione.
 */
#include <stdio.h>

int main(void) {
    float num1, num2;
    
    printf("Questo programma determina il minore tra i due valori inseriti dall'utente\n\n");
    
    printf("Inserisci il primo valore: ");
    scanf("%f", &num1);

    printf("Inserisci il secondo valore: ");
    scanf("%f", &num2);

    if(num1 < num2)
        printf("Il valore minore è: %f", num1);
    else
        printf("Il valore minore è: %f", num2);

    return 0;
}
