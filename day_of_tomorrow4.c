/**
 *  day_of_tomorrow3.c (v4.0)
 *
 *  In questa versione del programma ci andiamo ad occupare della gestione
 *  di date errate che l'utente potrebbe inserire.
*/

#include <stdio.h>
#include <stdlib.h>     /* necessaria per usare exit() */

struct date {
    int day;
    int month;
    int year;
};

struct date dateUpdate(struct date today) {
    struct date tomorrow;
    int numberOfDays(struct date d);
    
    if(today.day != numberOfDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if(today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}

int isDate(struct date d) {
    int numberOfDays(struct date d);

    return (d.day > 0 && d.day < numberOfDays(d) + 1) ? 1 : 0;
}

/*
    int numberOfDays(struct date d)
    
    Restituisce il numero di giorni del mese relativo alla data
    passata attraverso il parametro d.
*/
int numberOfDays(struct date d) { 
    int day;
    int isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(d.month == 2 && isLeapYear(d) == 1) {
        /* codice per anno bisestile e mese di Febbraio */
        return 29;
    } else {
        /* Se mon mi trovo in un anno bisestile e/o non sono a Febbraio */
        return daysPerMonth[d.month - 1];
    }
}

/*
 *  int isLeapYear(struct date d)
 *
 *  Restituisce 1 se l'anno relativo alla date d è un anno bisestile,
 *  0 altrimenti.
*/
int isLeapYear(struct date d) {
    
    if(d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100))
        return 1;
    else
        return 0;
}

int main(void) {
    struct date dateUpdate(struct date today);
    struct date thisDay, nextDay;

    printf("Digita la data corrente (gg mm aaaa): ");
    scanf("%i%i%i", &thisDay.day, &thisDay.month, &thisDay.year);

    /* controlla la correttezza della data
     * TODO: implementare un ciclo do-while che avverta l'utente dell'errore
     * nella data e gli consenta di reinserire nuovamente una data.
    */
    if(!isDate(thisDay)) {
        perror("Data errata");
        exit(1);
    }

    nextDay = dateUpdate(thisDay);

    printf("La data di domani è: %.2i/%.2i/%.2i.\n", nextDay.day, nextDay.month, nextDay.year % 100);

    return 0;
}
