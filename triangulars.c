#include <stdio.h>

int triangular(int n);

int main(void) {
    int num;
    
    printf("Inserisci un numero: ");
    scanf("%i", &num);

    printf("T(%i) = %i\n", num, triangular(num));

    return 0;
}

int triangular(int n) {
    if (n == 1)
        return 1;
    else
        return n + triangular(n - 1);
}
