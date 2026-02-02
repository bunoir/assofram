/* 
   triang.c
   
   calcola il numero triangolare T(n) per n dato
   in input dall'utent
*/
#include <stdio.h>

int main(void)
{
    int n;              /* ordine del numero da calcolare */
    int i;              /* contatore per fare il ciclo */
    int t;              /* valore del numero triangolare */

    /* Chiede all'utente l'inserimento dell'ordine del numero triangolare */
    printf("Inserisci l'ordine del numero triangolare: ");
    scanf("%i", &n);
    
    /* Ciclo da 1 a n */
    t = 0;
    for(i = 1; i <= n; ++i)
    {
        t = t + i;      /* aggiungo i al valore precedente di t */
    }
    
    /* mostro il risultato */
    printf("Il valore di T(%i) è: %i\n", n, t);

    /* termina */
    return 0;
}
