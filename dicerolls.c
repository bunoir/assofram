/*
    dicerolls.c

    Questo programma simula 1000 lanci di un dado, contando il
    numero di volte in cui ogni faccia appare.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS   10000000

int main(void)
{
    int facecount[6];       /* Dichiara l'array di 6 elementi per tenere il conto */
    int i;                  /* Contatore generico per cicli */
    int face;               /* Memorizza la faccia del dado dopo un lancio */


    /* Attiva il generatore di numeri casuali */
    srand(time(NULL));

    /* Inizializza a zero tutti gli elementi dell'array */
    for(i = 0; i < 6; i++)
        facecount[i] = 0;

    /* Esegue i lanci */
    for(i = 0; i < ROLLS; i++)
    {
        face = 1 + rand() % 6;

        facecount[face - 1]++;

    }

    /*
    Stampa in una tabella i risultati (numero di volte e la frequenza di
    uscita di ogni singola faccia del dado.
    */
    printf("Risultati su %i lanci\n", ROLLS);
    printf("-----------------------------------\n");
    printf(" Faccia |    Uscite    | Frequenza \n");
    printf("-----------------------------------\n");
    for(i = 0; i < 6; i++)
        printf("%5i   |  %6i      |%11.4f\n", i + 1, facecount[i], facecount[i]/(float)ROLLS);
    
    return 0;
}
