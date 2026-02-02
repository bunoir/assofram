/* example1.c
 * 
 * Questo programma calcola il quadrato della somma e quello della differenza
 * di due numeri interi immessi dall'utente.
*/
#include <stdio.h>

main() {
    int a, b, sum, diff, u, v;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b); /* a and b are read */
    sum = a + b; diff = a - b;
    u = sum * sum; v = diff * diff;
    printf("\nResults: %d and %d.\n", u, v);
}
