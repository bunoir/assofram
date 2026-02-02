/*
   Array (Vettori)
*/
#include <stdio.h>
int numbers[10];

int main(void)
{
    int i, sum;
    float avg;

    /* Assegnamo i valori */
    for(i = 0; i < 10; i++)
    {
        printf("Inserisci l'elemento %i (numero intero)", i);
        scanf("%i", &numbers[i]);
    }

    /* mostra i dati inseriti */
    printf("Riepilogo dati inseriti:\n");
    for(i = 0; i < 10; i++)
        printf("%i ", numbers[i]);
    printf("\n\n");

    /* Calcolo della somma di tutti i valori di numbers[] */
    sum = 0;
    for(i = 0; i < 10; i++)
        sum = sum + numbers[i];

    /* Calcolo della media dei valori di numbers[] */
    avg = sum / 10.0;

    /* Presentiamo il risultato */
    printf("La media dei valori è: %5.2f\n", avg);
}
