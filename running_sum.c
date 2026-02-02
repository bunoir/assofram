/*
    running_sum.c

    Questo programma riceve in input una serie di numeri double e, ad ogni
    inserimento aggiorna conteggio, somma, massimo, minimo e media dei
    valori inseriti.

    Il programma funziona al meglio con lettura dei valori tramite file di
    dati usando il concetto di redirezione comune a shell DOS e UNIX.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;                          /* contatore generico */
    double x,                       /* numero letto */
           min,                     /* valore minimo tra quelli letti */
           max,                     /* valore massimo trra quelli letti */
           sum,                     /* somma dei numeri letti */
           avg;                     /* media aritmetica dei valori letti */

    /* legge il primo valore e lo pone in x */
    if (scanf("%lf", &x) != 1) {
        /* nessun valore inserito, termina il programma con exit() */
        printf("Nessun dato trovato - stop\n");
        exit(1);
    }

    /* inizialmente possiamo porre tutti i valori pari al primo letto */
    avg = max = min = sum = x;      /* assegnazione multipla: a = (b = (c = d)) */

    /* stampa l'intestazione della lista di risultati via via calcolati */
    printf("%5s%9s%9s%9s%12s%12s\n%5s%9s%9s%9s%12s%12s\n", "Count", "Item", "Min", "Max", "Sum", "Average", "-----", "---------", "---------", "---------", "------------", "------------");
    
    /* stampa, con adeguata formattazione, i valori calcolati per il primo dato */
    printf("%5i%9.1f%9.1f%9.1f%12.3f%12.3f\n", i, x, min, max, sum, avg);

}
