/**
 *  Inizializzare le Strutture
 *
 *  Esempi di inizializzatione di struct(s)
 */
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main(void) {
    /*
     *  Dichiarazione e assegnazione implicita di valori a tutti i membri
     *  della struct secondo l'ordine di definizione. Negli esempi seguenti
     *  la variabile today. di tipo struct date, è impostata alla data del
     *  2 luglio 2011 e alla variabile now, di tipo struct time, è assegnato
     *  il valore 3:29:55 (am).
    */
    struct date today = {2, 7, 2011};
    struct time now   = {3, 29, 55};
    
    /*
     *  1. DICHIARAZIONE E INIZIALIZZAZIONE
     *
     *  Come nel caso dei vettori, anche con le struct è possibile 
     *  inizializzare una variabile usando meno valori di quelli attesi.
     *  Nell'esempio seguente la variabile time1 è inizializzata solo
     *  relativamente ai membri .hour e .minutes, il valore di .seconds
     *  resta invece indefinito.
    */
    struct time time1 = {12, 10}; /* time1.hour = 12, time1.minutes = 10 */
    
    /*
     *  2. DICHIARAZIONE E INIZIALIZZAZIONE MEMBRI ESPLICITA
     *
     *  Nelle assegnazioni (parziali o complete che siano), possiamo
     *  esplicitare l'assegnazione di un valore ad uno specifico membro.
     *  L'esempio seguente è equivalente al precedente. Qual è il valore
     *  assegnato ai membri non coinvolti?
    */
    struct time time2 = {.hour = 12, .minutes = 10};

    /*
     *  3. DICHIARAZIONE E INIZIALIZZAZIONE MEMBRI MISTA
     *  Cosa accade se usiamo delle assegnazioni miste? Nell'esempio a
     *  seguire assegnamo un valore esplicitamente e gli altri invece 
     *  implicitamente.
    */
    struct time time3 = {13, .seconds = 7, 20};
    struct time time4 = {.seconds = 10, 20, 10};

    /*
     *  4. ASSEGNAZIONE POST DICHIARAZIONE
     *  Naturalmente è possibile dichiarare una variabile struct e
     *  assegnare i valori ai suoi membri in seguito nel codice. 
     *  Valgono le stesse considerazioni svolte nel caso della sola
     *  dichiarazione + inizializzazione.
    */
    struct date day1, day2;
    
    day1.day = 10;
    day1.month = 4;
    day1.year = 2025;

    day2.day = 1;
    day2.year = 2025;

    /*
     *  5. MEMBRI DI ALTRI TIPI
    */


    /* Mostriamo a video il risultato delle assegnazioni fatte */
    printf("today: %i/%i/%i\n", today.day, today.month, today.year);
    printf("now  : %i:%i:%i\n", now.hour, now.minutes, now.seconds);
    printf("time1: %i:%i:%i\n", time1.hour, time1.minutes, time1.seconds);
    printf("time2: %i:%i:%i\n", time2.hour, time2.minutes, time2.seconds);
    printf("time3: %i:%i:%i\n", time3.hour, time3.minutes, time3.seconds);
    printf("time4: %i:%i:%i\n", time4.hour, time4.minutes, time4.seconds);
    printf("day1 : %i/%i/%i\n", day1.day, day1.month, day1.year);
    printf("day2 : %i/%i/%i\n", day2.day, day2.month, day2.year);
    
    return 0;
}
