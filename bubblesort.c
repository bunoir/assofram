/*
    bubblesort.c

    Algoritmo di ordinamento di un vettore con il "Bubble Sort"
    In questa implementazione l'ordinamento avviene per un 
    vettore numerico a valori interi. La stessa logica può
    essere applicata a vettori con elementi di tipo differente
    purchè "ordinabile", ovvero un tipo che ammetta un operazione
    di relazione che stabilisca maggiore e minore tra valori.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM   50000

int main(void)
{
    int array[DIM];         /* Array da ordinare                */
    int i, j;               /* Indice/contatore generico        */
    int temp;               /* Variabile temporanea per lo swap */
    
    /* Attiviamo il generatore di numeri casuali */
    srand(time(NULL));

    /* Assegnamo ad array[] valori casuali tra -500 e 500 */
    for(i = 0; i < DIM; ++i)
        array[i] = -500 + rand() % 1001;
        
    /* Mostriamo all'utente i valori dell'array */
    for(i = 0; i < DIM; ++i)
        printf("%i, ", array[i]);

    printf("\n\n--- ARRAY ORDINATO ---------------------------------------\n\n");

    /* Bubble Sort */
    for(i = 0; i < DIM - 1; ++i)
        for(j = DIM - 1; j > i; --j)
            if(array[j] > array[j - 1])
            {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }

    /* Mostriamo all'utente i valori dell'array */
    for(i = 0; i < DIM; ++i)
        printf("%i, ", array[i]);
 
    printf("\n");

    return 0;
}
