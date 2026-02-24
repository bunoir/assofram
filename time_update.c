#include <stdio.h>

/* Definizione della struttura time */
struct time
{
    int hour;       /* Ore      */ 
    int minutes;    /* Minuti   */
    int seconds;    /* Secondi  */
};

int main(void)
{
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;

    /* Richiede all'utente l'inserimento di un'orario rispettando uno specifico formato */
    printf("Digita l'orario (hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

    /* Chiama la funzione timeUpdate che restituirà l'orario aggiornato in nextTime */
    nextTime = timeUpdate(currentTime);

    /* Mostra l'orario aggiornato sullo schermo */
    printf("L'orario aggiornato è: %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

    return 0;
}

/**
 *  timeUpdate
 *  Aggiorna l'orario passato come parametro (struct time) aggiungendo ad esso un secondo
 *  e restituisce il risultato dell'aggiornamento.
 *   
 *  @param  now         orario da aggiornare
 *  @return struct time orario aggiornato 
 */
struct time timeUpdate(struct time now)
{
    /* Aggiunge uno al membro secondo del parametro */
    ++now.seconds;

    /* Aggiornamento dell'orario */
    if (now.seconds == 60) {
        /* Abbiamo raggiuinto un minuto */
        now.seconds = 0;    /* Azzera i secondi */
        ++now.minutes;      /* Incrementa i minuti */
        
        if (now.minutes == 60) {
            /* Abbiamo raggiunto un'ora */
            now.minutes = 0;    /* Azzera i minuti */
            ++now.hour;         /* Incrementa l'ora */
            
            if (now.hour == 24)
                /* Passate 24 ore */
                now.hour = 0;   /* Azzera le ore */
        }
    }
    
    /* Restituisce l'orario aggiornato */
    return now;
}
