#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int cnt, number, guess;

    /* 
        Attiva la generazione di numeri casuali e genera un numero intero
        compreso tra 1 e 100 conservandolo nella variabile number
    */
    srand(time(NULL));
    number = 1 + rand() % 100;
    
    /* Presenta all'utente il gioco */
    printf("Ho pensato un numero intero compreso tra 1 e 100\n");

    cnt = 0;

    do {
        
        /* Richiede all'utente di indovinare il numero */
        printf("Inserisci un numero e prova ad indovinare: ");
        scanf("%i", &guess);
        
        ++cnt;

        /* Controlla il valore insierito e fornisce feedback */
        if (guess > number)
            printf("Il numero che hai inserito è troppo grande\n");
        else if (guess < number)
            printf("Il numero che hai inserito è troppo piccolo\n");

        printf("Tentativi effettuati: %i\n", cnt);

        if (cnt == 15) break;

    } while (guess != number);

    if (guess != number)
        printf("Numero dei tentativi esaurito!\n");
    else
        printf("Hai indovinato in %i tentativi!\n", cnt);

    printf("Il numero pensato era: %i\n", number);

    return 0;
}
