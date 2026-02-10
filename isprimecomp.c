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

int isprime_basic(int num);
int isprime_sqrt(int num);

int main(void) {
    int n, i;
    int prime;  
    clock_t start, finish;
    double exectime;

    printf("Inserisci un numero intero: ");
    scanf("%i", &n);

    start = clock();
    
    for (i = 0; i < 10; i++) {
        prime = isprime_basic(n);
    }

    finish = clock();

    exectime = (double)(finish - start) / CLOCKS_PER_SEC;

    printf("Tempo di esecuzione (basic): %f secondi\n", exectime);

    /* Metodo alternativo */

    start = clock();

    for (i = 0; i < 10; i++) {
        prime = isprime_sqrt(n);
    }

    finish = clock();    
    
    exectime = (double)(finish - start) / CLOCKS_PER_SEC;

    printf("Tempo di esecuzione (sqrt): %f secondi\n", exectime);

    if (prime) {
        printf("Il numero inserito è primo\n");
    } else {
        printf("Il numero inserito NON è primo\n");
    }

    return 0;
}

int isprime_basic(int num) {
    int i;

    for (i = 2; i < num; i++)
        if (num % i == 0) return 0;

    return 1;
}

int isprime_sqrt(int num) {
    int i;

    for (i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;

    return 1;
}
