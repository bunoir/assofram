/*
    grades_avg.c

    Programma per calcolare la media di una serie di voti inseriti dall'utente
    e contare il numero delle insufficienze presenti. Per lo scopo di questo
    programma il voto è rappresentato da un valore intero nell'intervallo [0, 100]
    e l'insufficienza un valore minore o uguale a 65.
*/
#include <stdio.h>

int main(void)
{
    int i;                              /* Contatore generico                        */
    int numberOfGrades;                 /* Contiene il numero di voti da inserire    */
    int grade;                          /* Voto corrente durante il ciclo di input   */
    int gradeTotal = 0;                 /* Memorizza la somma progressiva dei voti   */
    int failureCount = 0;               /* Conta il numero di insufficienze inserite */
    float average;                      /* Media dei voti                            */

    /* Richiede all'utente il numero di voti da inserire, memorizzandolo nella       */
    /* variabile numberOfGrades.                                                     */
    printf("Quanti sono i voti della lista? ");
    scanf("%i", &numberOfGrades);
    
    /* Ciclo di inserimento dei voti. Ogni voto è letto e memorizzato in grade       */
    /* questo valore va quindi ad aggiornare quello della variabile gradeTotal e     */
    /* attraverso un controllo viene incrementato, nel caso, il contatore delle      */
    /* insufficienze rappresentato dalla variabile failureCount.                     */
    for (i = 1; i <= numberOfGrades; ++i) {
        /* Acquisisce il voto i-esimo e lo memorizza in grade. */
        printf("Digita il voto #%02i: ", i);
        scanf("%i", &grade);
        
        /* Aggiorna la somma totale dei voti inseriti per il calcolo della media.    */
        gradeTotal = gradeTotal + grade;
        
        /* Controlla se il voto appena inserito sia o meno una insufficienza e nel   */
        /* caso incrementa il contatore delle insufficienza failureCount.            */
        if (grade < 65)
            ++failureCount;
    }
    
    /* Calcola la media. È necessario il casting su uno dei valori della divisione   */
    /* per evitare l'operazione tra interi.                                          */
    average = (float) gradeTotal / numberOfGrades;

    /* Stampa a video i risultati dei calcoli */
    printf("\nMedia dei voti = %.2f\n", average);
    printf("Numero di insufficienze = %i\n", failureCount);

    /* Termina il programma normalmente tornando al S.O. */
    return 0;
}
