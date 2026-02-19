#include <stdio.h>

int main(void) {
    struct date {
        int day;
        int month;
        int year;
    };

    struct date  today;

    today.day = 25;
    today.month = 1;
    today.year = 2011;

    printf("La data di oggi è %i/%i/%.2i.\n", today.day, today.month, today.year % 100);

    return 0;
}
