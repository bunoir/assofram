/*
    dicefreqs.c

    Questo programma simula un certo numero di lanci (ROLLS) di un dado
    contando il numero di volte in cui ogni faccia appare. Questi numeri
    sono usati poi per calcolare la frequenza di apparizione di ogni
    faccia e confrontarla con il valore atteso di 1/6.
    
    Il numero di uscite di ogni faccia viene tenuto in un array di 6
    elementi dove il conteggio della i-ma faccia del dado viene 
    tenuto dall'i-1mo elemento dell'array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS   15000000

int main(void)
{
    int facecount[6];       /* Dichiara l'array di 6 elementi facecount */
    int i;                  /* Contatore generico per cicli */
    int face;               /* Memorizza la faccia del dado per ogni lancio */
    
    /* Inizializza a zero tutti gli elementi dell'array */
    for(i = 0; i < 6; i++)
        facecount[i] = 0;

    /* Attiva il generatore di numeri casuali */
    srand(time(NULL));

    /* Esegue ROLLS lanci */
    for(i = 0; i < ROLLS; i++)
    {
        /* Genera un numero casuale tra 1 e 6 */
        face = 1 + rand() % 6;
        
        /* Incrementa di uno l'elemento relativo alla faccia uscita */
        facecount[face - 1]++;
    }
    
    /*
    Stampa in una tabella i risultati (numero di volte e frequenza di
    uscita di ogni faccia).
    */
    printf("Risultati su ROLLS lanci\n\n");
    printf("-----------------------------\n");
    printf(" Faccia | Uscite | Frequenza \n");
    printf("-----------------------------\n");

    for(i = 0; i < 6; i++)
    {
        printf("%5i   |%6i  |%11.4f\n", i, facecount[i], facecount[i] / (float)ROLLS);
    }

    return 0;
}
