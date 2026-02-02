#include <stdio.h>

int fattoriale(int n);

int main(void) {
    int num;
    
    printf("Inserisci un numero: ");
    scanf("%i", &num);

    printf("Il fattoriale di %i è %i\n", num, fattoriale(num));

    return 0;
}

int fattoriale(int n) {
    if (n == 0)
        return 1
    else
        return n * fattoriale(n - 1);
}
