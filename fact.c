/*
   fact.c (ua staje 't fatt)

   Calcola il fattoriale di un numero n chiesto in input
   all'utente.
*/
#include <stdio.h>

int main(void)
{
    int n,i,fact;

    printf("Inserisci il numero di cui calcolare il fattoriale: ");
    scanf("%i", &n);

    fact = 1;
    for(i = 1; i <= n; i = i + 1)
    {
        fact = fact * i;
    }

    printf("Il valore di %i! è: %i\n", n, fact);

    return 0;
}
