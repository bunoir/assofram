/*
   factcycle.c (ua staje 't fatt a ciclo)

   Calcola il valore dei primi n numeri fattoriali
   con n inserito dall'utente.
*/
#include <stdio.h>

int fact(int n);
int triang(int n);

int main(void)
{
    int n, i, f, t;

    printf("Inserisci il valore di n: ");
    scanf("%i", &n);

    printf(" n    | T(n)  | n!   \n");
    printf("---------------------\n");

    for(i = 1; i <= n; i = i + 1)
    {
        /* stampo il valore di i!*/
        f = fact(i); 
        t = triang(i);

        printf("%5i | %5i | %5i\n", i, t, f);
    }

    return 0;
}

int fact(int n)
{
    int i, fact;

    fact = 1;
    for(i = 1; i <= n; ++i)
    {
        fact = fact * i;
    }

    return fact;
}

int triang(int n)
{
    int i, sum;

    sum = 0;
    for(i = 1; i <= n; ++i)
    {
        sum = sum + i;
    }

    return sum;
}









