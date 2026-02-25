#include <stdio.h>

int main(void) {
    int num1, num2, num3, ret;

    printf("Inserisci due numeri interi: ");
    ret = scanf("%i%i", &num1, &num2);
    
    printf("Valore restituito da scanf(): %i\n", ret);

    return 0;
}
