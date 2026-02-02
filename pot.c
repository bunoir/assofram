#include <stdio.h>

/* Prototipo funzione pot() */
float pot(float num, int deg);

int main(void)
{
    float number, result;
    int degree;

    printf("Inserisci un valore numerico reale: ");
    scanf("%f", &number);
    printf("Inserisci la potenza da calcolare: ");
    scanf("%i", &degree);

    result = pot(number, degree);

    printf("%.2f elevato a %i è pari a: %.2f\n", number, degree, result);
}

float pot(float num, int deg)
{
    int i;
    float res = 1;

    for(i = 1; i <= deg; i++)
    {
        res = res * num;
    }

    return res;
}


