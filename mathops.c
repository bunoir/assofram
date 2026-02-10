/*
**  mathops.c
**
**  Descrizione dell'uso di vari operatori aritmetici
*/
#include <stdio.h>

int main(void) {
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    printf("Variabili inizializzate\n-----------------------\n");
    printf("a = %i\nb = %i\nc = %i\nd = %i\n", a, b, c, d);

    /* sottrazione */
    printf("\nSottrazione\n");
    printf("-------------------------\n");
    result = a - b;
    printf("a - b = %d\n", result);

    /* moltiplicazione */
    printf("\nMoltiplicazione\n");
    printf("-------------------------\n");
    result = b * c;
    printf("b * c = %i\n", result);

    /* divisione */
    printf("\nDivisione\n");
    printf("-------------------------\n");
    result = a / c;
    printf("a / c = %i\n", result);

    /* addizione e moltiplicazione (priorità operatori) */
    printf("\nCombinazioni di Operatori\n");
    printf("-------------------------------\n");
    result = a + b * c;
    printf("a + b * c\t\t= %i\n", result);
    result = (a + b) * c;
    printf("(a + b) * c\t\t= %i\n", result);
    result = a + (b * c);
    printf("a + (b * c)\t\t= %i\n", result);
    
    printf("a * b + c * d\t\t= %i\n", a * b + c * d);
    printf("a * (b + c * d)\t\t= %i\n", a * (b + c * d));
    printf("a * (b + (c * d))\t= %i\n", a * (b + (c * d)));
    printf("a * ((b + c) * d)\t= %i\n", a * ((b + c) * d));
    printf("(a * b) + c * d\t\t= %i\n", (a * b) + c * d);
    printf("((a * b) + c) * d\t= %i\n", ((a * b) + c) * d);
    printf("a * (b + c) * d\t\t= %i\n", a * (b + c) * d);
    printf("(a * b) + (c * d)\t= %i\n", (a * b) + (c * d));
    printf("(a * (b + c)) * d\t= %i\n", (a * (b + c)) * d);

    return 0;
}
