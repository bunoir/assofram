#include <stdio.h>

void printelmzero(int vet[]);

int main(void)
{
    int arr[5];

    arr[0] = 10;
    arr[1] = 2;
    arr[2] = -1;
    arr[3] = 5;
    arr[4] = -7;

    printf("arr[0] prima della chiamata: %i\n", arr[0]);

    /* chiamata della funzione */
    printelmzero(arr);
    
    printf("arr[0] dopo la chiamata: %i\n", arr[0]);
    printf("arr[2] dopo la chiamata: %i\n", arr[2]);
}

void printelmzero(int vet[])
{
    int i;

    /*
    Assegna il valore 3 a tutti gli elementi di vet[]
    (che poi sono gli elementi di arr[])
    */
    for(i = 0; i < 5; i++)
        vet[i] = 3;

    printf("Primo elemento %i\n", vet[0]);
}
