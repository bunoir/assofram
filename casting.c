/*
**  casting.c
**  
**  Esempi di conversione di tipo
*/
#include <stdio.h>

int main(void) {
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';

    i1 = f1;    /* conversione da virgola mobile a intero */
    printf("%f assegnato ad un valore intero produce %i\n", f1, i1);
    
    f1 = i2;    /* conversione da intero a virgola mobile */
    printf("%i assegnato ad un valore in virgola mobile produce %f\n", i2, f1);

    f1 = i2 / 100; 
    printf("%i diviso 100 produce %f\n", i2, f1);

    f2 = i2 / 100.0;
    printf("%i diviso 100.0 produce %f\n", i2, f2);

    f2 = (float) i2 / 100;  /* casting, con operatore cast ==> (type) */ 
    printf("(float) %i diviso 100 produce %f\n", i2, f2);
   
   return 0;
}
