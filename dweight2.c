/*
 * dweight2.c
 * 
 * Calcola il peso dimensionale di un pacco avente dimensioni 
 * assegnate dall'utente.
 *
 * Versione: 0.2
 * Data: 16 dic 2025
 */

#include <stdio.h>
#define DIMF 150            /* Fattore dimensionale usato dalla compagnia */

int main(void)
{
    /* dichiarazione delle variabili */
    int height, length, width, volume, weight;

    /* Richiesta dei dati all'utente */
    printf("Inserire l'altezza del box (cm): ");
    scanf("%d", &height);
    printf("Inserire la lunghezza del box (cm): ");
    scanf("%d", &length);
    printf("Inserire l'ampiezza del box (cm): ");
    scanf("%d", &width);
    
    /* calcolo volume e peso dimensionale */
    volume = height * length * width;
    weight = (volume + DIMF - 1) / DIMF;          /* calcolo del peso dimensionale arrotondando per eccesso */ 

    /* mostro i dati all'utente */
    printf("\n\nRiepilogo dati\n");
    printf("--------------------------------\n");
    printf("Altezza %d cm\n", height);
    printf("Lunghezza %d cm\n", length);
    printf("Ampiezza %d cm\n", width);
    printf("--------------------------------\n");
    printf("Volume Spedizione (cc): %d\n", volume);
    printf("Peso Dimensionale (kg): %d\n\n", weight);

    return 0;
}
