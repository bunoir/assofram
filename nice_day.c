/*
    nice_day.c

    In questo programma memorizziamo in un array di caratteri (una stringa) 
    viene memorizzato del testo fornito dall'utente. Tale testo viene poi
    successivamente invertito (letto dalla fine all'inizio) e stampato sullo
    schermo. I numeri rappresentanti i caratteri inseriti sono sommati
    progressivamente e la somma finale viene mostrata all'utente.

    Nel programma vengono introdotte le macro getchar() e putchar(), usate
    per leggere dalla tastiera e scrivere su schermo un carattere
    rispettivamente, e viene usata la macro isalpha() che determina se un
    carattere sia o meno alfabetico. Infine viene mostrato come in C sia
    possibile trattare un carattere come un intero di piccola dimensione.
*/
#include <ctype.h>
#include <stdio.h>

#define  MAXSTRING  100

int main(void) 
{
    char    c, name[MAXSTRING];
    int     i, sum = 0;

    printf("\nCiao! Qual è il tuo nome? ");
    for(i = 0; (c = getchar()) != '\n'; ++i) {
        name[i] = c;
        if(isalpha(c)) sum += c;
    }
    name[i] = '\0';

    printf("\n%s%s%s\n%s","Lieto di conoscerti ", name, ".", "Il tuo nome al contrario è: ");
    for(--i; i >= 0; --i)
        putchar(name[i]);

    printf("\n%s%d%s\n\n%s\n","e le lettere nel tuo nome, sommate, danno ", sum, ".",
           "Felice giornata!");

    return 0;
}
