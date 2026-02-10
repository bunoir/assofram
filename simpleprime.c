/*
**  simpleprime.c
**
**  Questo programma determina se un numero intero inserito dall'utente
**  sia o meno un numero primo.
**
**  NOTA:   Un numero si dice primo quando gli unici suoi divisori sono il
**          il numero 1 e il numero stesso. I numeri primi sono definiti
**          soltanto come numeri positivi.
*/
#include <stdio.h>
#include <time.h>

int main(void) {
    int n, i;
    int prime = 1;      /* Flag indicante un numero primo */
    clock_t start, finish;
    double exectime;

    printf("Inserisci un numero intero: ");
    scanf("%i", &n);

    start = clock();

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    finish = clock();

    exectime = (double)(finish - start) / CLOCKS_PER_SEC;

    if (prime) {
        printf("Il numero inserito è primo\n");
    } else {
        printf("Il numero inserito NON è primo\n");
    }

    printf("Tempo di esecuzione: %f secondi\n", exectime);

    return 0;
}
