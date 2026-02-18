/*
 *  arrayshift.c
 *
 *  Un array di 10 elementi viene popolato con valori costanti
*/
#include <stdio.h>

int main(void) {
    int i, array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    for (i = 0; i < 10; ++i)
        printf("%i, ", array[i]);
    printf("\b \b\n");

    return 0;
}
