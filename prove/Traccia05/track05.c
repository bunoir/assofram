/**
 * Traccia #5 - Minimo tra due valori
 *
 * Il candidato scriva un programma che richieda all'utente l'inserimento di
 * due valori numerici reali mostrando a video il minore tra essi.
 * Si consideri valido l'input utente (nessun controllo necessario).
 */
#include <stdio.h>

int main(void) {
    float num1;     /* Valore inserito dall'utente per il confronto            */
    float num2;     /* Valore inserito dall'utente per il confronto            */
    float min;      /* Contiene il valore più piccolo tra i due in num1 e num2 */
    
    /* Riga di presentazione del funzionamento del programma */
    printf("Questo programma determina il minore tra i due valori inseriti dall'utente\n\n");
    
    /* Richiede all'utente l'inserimento dei valori da confrontare */
    printf("Inserisci due valori numerici separati da spazio: ");
    scanf("%f%f", &num1, &num2);    /* I valori saranno memorizzati in num1 e num 2 */

    /* Determina il minimo tra i valori inseriti */
    if(num1 > num2)
        min = num2;     /* Il minimo è num2 */
    else
        min = num1;     /* Il minino è num1 */

    /* Mostra il risultato a video */
    printf("Il valore minore tra quelli inseriti è:%.2f\n", min);

    return 0;
}
