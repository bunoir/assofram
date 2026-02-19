/**
 *  day_of_tomorrow2.c (v2.0)
 *
 *  Il programma calcola la data successiva a quella inserita dall'utente.
 *  In questa versione viene considerata la presenza di anni bisestili.
*/

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main(void) {
    struct date today, tomorrow;
    int numberOfDays(struct date d);

    printf("Digita la data corrente (gg mm aaaa): ");
    scanf("%i%i%i", &today.day, &today.month, & today.year);

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

    printf("La data di domani è: %.2i/%.2i/%.2i.\n", tomorrow.day, tomorrow.month, tomorrow.year % 100);

    return 0;
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
