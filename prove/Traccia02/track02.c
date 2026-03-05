/**
 * Traccia #2 - Madia aritcmetica di n numeri
 *
 * Il candidato scriva un programma che richieda l'inserimento di n numeri
 * reali (n > 0, scelto dall'utente) e ne calcoli la loro media aritmetica
 * mostrando all'utente il risultato arrotondato ai centesimi.
 * L'input dell'utente si assume corretto, nessun controllo su esso è
 * pertanto necessario (sia su n che sui valori numerici inseriti).
 */ 
#include <stdio.h>

int main(void) {
    int     i;      /* Contatore generico per cicli                           */
    int     n;      /* Numero di valori da leggere (n > 0)                    */
    float   sum;    /* Accumulatore della somma dei valori inseriti           */
    float   val;    /* Valore temporaneo inserito durante il ciclo di lettura */
    float   avg;    /* Media dei valori inseriti (sum / n)                    */

    /* Richiede all'utente il numero di valori da leggere e lo memorizza in n */
    printf("Inserire il numero n di valori da leggere (n > 0): "); 
    scanf("%i", &n);

    /*
     * Ciclo di lettura dei valori. Durante il ciclo i valori letti sono via via
     * sommati tra loro nella variabile sum.
    */
    sum = 0; /* Inizializza sum per contenere la somma dei valori immessi */
    for(i = 0; i < n; ++i) {
        /* Legge il valore i-esimo e lo memorizza in val */
        printf("Inserire il valore #%i: ", i + 1);
        scanf("%f", &val);
        
        /* Accumula in sum la somma dei valori aggiungendo val */
        sum = sum + val; /* sum += val */
    }

    /* Calcola la media dei valori inseriti e pone il risultato in avg */
    avg = sum / n;

    /* Mostra a video il valore della media come richiesto */
    printf("Media dei valori inseriti: %.2f\n", avg);

    return 0;
}
