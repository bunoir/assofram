#include <stdio.h>

#define PERCENT 1.05

int main(void)
{
    float amount, total;

    printf("Inserisci l'ammontare in €: ");
    scanf("%f", &amount);

    total = amount * PERCENT;
   
    
    printf("Totale + 5%% = %.2f €\n", total);

    return 0;
}
