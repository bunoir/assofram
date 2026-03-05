/**
 * Traccia #3 - Media aritmetica di n numeri con analisi
 *
 * Il candidato scriva un programma che richieda l'inserimento di n numeri
 * reali (0 < n < 100) ­– con n scelto dall'utente – e ne calcoli la media
 * aritmetica mostrandola a video.
 * Il programma visualizzi, inoltre, tutti i numeri tra quelli immessi che
 * sono minori o uguali alla media e tutti quelli che sono invece maggiori
 * di essa.
 * Si assumano corretti tutti gli input utente (nessun controllo su essi).
 */
#include <stdio.h>

int main(void) {
    int     n;              /* Numero di elementi da leggere                 */
    int     i;              /* Contatore generico                            */
    float   sigma = 0.0f;   /* Accumulatore per il calcolo della media       */
    float   values[100];    /* Array contenente i valori forniti dall'utente */
    float   avg;            /* Media dei valori contenuti in values[]        */

    /* Richiesta del numeri di elementi da leggere */
    printf("Inserisci il numero di elementi da leggere n (0 < n < 100): ");
    scanf("%i", &n);    /* Il valore immesso viene conservato in n */

    /* Lettura degli n valori reali */
    for(i = 0; i < n; ++i) {
        /* Memorizza i valori via via immessi nel vettore values[] */
        printf("Inserisci il valore #%i: ", i + 1);
        scanf("%f", &values[i]);
    }

    /* Calcola la somma algebrica di tutti gli elementi in values[] */
    for(i = 0; i < n; ++i)
        sigma += values[i];

    /* Calcolo e visualizzazione della media */
    avg = sigma / n;
    printf("\nMedia artimetica: %.2f\n", avg);

    /* Ricerca e visualizzazione di valori minori o uguali ad avg */
    printf("Valori minori o uguali a %.2f\n", avg);
    for(i = 0; i < n; ++i) {
        if(values[i] <= avg) printf("|%.2f", values[i]);
    }
    printf("|\n\n");

    /* Ricerca e visualizzazione di valori maggiori ad avg */
    printf("Valori maggiori di %.2f\n", avg);
    for(i = 0; i < n; ++i)
        if(values[i] > avg) printf("|%.2f", values[i]);
    printf("|\n");

    return 0;
}
