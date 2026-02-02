#include <stdio.h>

int main() {
    int n, max, min;
    
    printf("=== MAX e MIN ====================\n");
    printf(" Questo programma permette l'inserimento\n");
    printf(" di una serie di valori e ne determina\n");
    printf(" il massimo e il minimo\n");
    printf("==================================\n\n");
    
    printf("Per terminare la sequenza inserire un carattere qualsiasi.\n\n");
    
    printf("Inserisci un numero intero: ");
    if (scanf("%i", &n) != 1) {
        printf("Nessun dato inserito - termine esecuzione");
        return 0;
    }
    
    // imposto il massimo e il minimo pari al primo valore letto    
    max = min = n;
    
    // eseguo un ciclo per la lettura dei restanti 4 valori
    printf("Inserisci un numero intero: ");
    while(scanf("%i", &n) == 1)
    {
        // Aggiorna il max e il min
        if (n > max) {
            max = n;
        }
        else {
            if (n < min) {
                min = n;
            }
        }
        // Richiede l'inserimento di un altro numero
        printf("Inserisci un numero intero: ");
    }
    
    printf("Il minimo è: %i\n", min);
    printf("Il massimo è: %i\n", max);

    return 0;
}
