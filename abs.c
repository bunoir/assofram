/*
    abs.c

    Calcola il valore assoluto di un numero inserito dall'utente.
*/
#include <stdio.h>

int main(void)
{
    int number;

    printf("Digita un numero: ");
    scanf("%i", &number);

    if (number < 0)
        number = -number;

    printf("Valore assoluto: %i\n", number);

    return 0;
}
