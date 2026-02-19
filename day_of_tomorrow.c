/**
 *  day_of_tomorrow.c (v1.0)
 *
 *  Il programma calcola la data successiva a quella inserita dall'utente.
 *  In questa versione inziale viene trascurata la questione degli anni
 *  bisestili assumendo per Febbraio sempre 28 giorni.
*/

#include <stdio.h>

int main(void) {
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today, tomorrow;
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digita la data corrente (gg mm aaaa): ");
    scanf("%i%i%i", &today.day, &today.month, & today.year);

    if(today.day != daysPerMonth[today.month - 1]) {
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
