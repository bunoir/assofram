#include <stdio.h>

int main(void)
{
    int num;

    num = 7;

    printf("Il valore della variabile num è: %d\nnum è associata all'indirizzo in memoria: %d\n", num, &num);

    return 0;
}
